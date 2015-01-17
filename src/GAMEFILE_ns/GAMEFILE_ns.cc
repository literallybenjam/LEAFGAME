/*  LEAFGAME GAME FILE I/O NAMESPACE DEFINITION | GAMEFILE_ns.cc  */
/*  version 1.0; written as part of the LEAFSYS package  */

#include "GAMEFILE_ns.h"
#include "../GAME2OPS_ns/GAME2OPS_ns.h"
#include <fstream>

LEAFGAME::GAMEFILE::Document LEAFGAME::GAMEFILE::create(unsigned int length) {
    LEAFGAME::GAMEFILE::Document document = new LEAFGAME::GAMEFILE::Document_Struct;
    document -> length = length;
    document -> data = new unsigned char[length];
    for (unsigned int i = 0; i < length; i++) {
        document -> data[i] = 0;
    }
    return document;
}

LEAFGAME::GAMEFILE::Document LEAFGAME::GAMEFILE::createFromExisting(LEAFGAME::GAMEFILE::Document source, unsigned int start, unsigned int length) {
    LEAFGAME::GAMEFILE::Document document = new LEAFGAME::GAMEFILE::Document_Struct;
    if (!length) document -> length = source -> length;
    else document -> length = length;
    document -> data = new unsigned char[document -> length];
    for (unsigned int i = 0; i < document -> length; i++) {
        if (i + start < source -> length) document -> data[i] = source -> data[i + start];
        else document -> data[i] = 0;
    }
    return document;
}

LEAFGAME::GAMEFILE::Document LEAFGAME::GAMEFILE::createFromFile(const char * file_name, const char * file_location, bool local) {

    LEAFGAME::GAMEFILE::Document document = new LEAFGAME::GAMEFILE::Document_Struct;
    std::ifstream reader;
    if (local) reader.open(LEAFGAME::GAME2OPS::getProgramFileLocation(file_name, file_location), std::ios_base::binary);
    else reader.open(LEAFGAME::GAME2OPS::getResourceLocation(file_name, file_location), std::ios_base::binary);

    reader.seekg(0, reader.end);
    document -> length = reader.tellg();
    document -> data = new unsigned char[document -> length];
    reader.seekg(0, reader.beg);

    reader.read(reinterpret_cast<char *>(document -> data), document -> length);

    return document;

}

void LEAFGAME::GAMEFILE::save(const char * file_name, const char * file_location, LEAFGAME::GAMEFILE::Document document) {
    std::ofstream writer;
    writer.open(LEAFGAME::GAME2OPS::getProgramFileLocation(file_name, file_location), std::ios_base::trunc|std::ios_base::binary);
    writer.write(reinterpret_cast<char *>(document -> data), document -> length);
}

void LEAFGAME::GAMEFILE::purge(LEAFGAME::GAMEFILE::Document & document) {
    if (!document) return;
    delete [] document -> data;
    delete document;
    document = 0;
}
