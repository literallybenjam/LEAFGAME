/*  LEAFGAME GAME FILE I/O NAMESPACE DECLARATION | GAMEFILE_ns.h  */
/*  version 1.0; written as part of the LEAFGAME package  */

#ifndef LEAFGAME_GAMEFILE_NS_H
#define LEAFGAME_GAMEFILE_NS_H

namespace LEAFGAME {
    namespace GAMEFILE {

        struct Document_Struct {
            unsigned int length;
            unsigned char * data;
        };

        typedef Document_Struct * Document;

        LEAFGAME::GAMEFILE::Document create(unsigned int length=0);
        LEAFGAME::GAMEFILE::Document createFromExisting(LEAFGAME::GAMEFILE::Document source, unsigned int start = 0, unsigned int length = 0);
        LEAFGAME::GAMEFILE::Document createFromFile(const char * file_name, const char * file_location, bool local = false);
        void save(const char * file_name, const char * file_location, LEAFGAME::GAMEFILE::Document document);
        void purge(LEAFGAME::GAMEFILE::Document & document);

    }
}

#endif
