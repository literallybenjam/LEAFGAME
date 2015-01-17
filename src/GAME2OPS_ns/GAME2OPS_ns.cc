/*  LEAFGAME TO OPERATING SYSTEM NAMESPACE DEFINITION | GAME2OPS_ns.cc  */
/*  version 1.0; written as part of the LEAFGAME package  */

#include "../GAMEINFO_ns/GAMEINFO_ns.h"
#include "GAME2OPS_ns.h"
#include <cstdlib>

char LEAFGAME::GAME2OPS::char_buffer[1024] = {0};

#ifdef __APPLE__

#include <CoreFoundation/CoreFoundation.h>
#include <sys/stat.h>

char * LEAFGAME::GAME2OPS::getResourceLocation(const char * resource_name, const char * resource_subdirectory) {

    CFBundleRef main_bundle = CFBundleGetMainBundle();
    CFStringRef CFSTR_resource_name = CFStringCreateWithCString(NULL, resource_name, kCFStringEncodingUTF8);
    CFStringRef CFSTR_resource_subdirectory = CFStringCreateWithCString(NULL, resource_subdirectory, kCFStringEncodingUTF8);

    CFURLRef CFURL_resource_location = CFBundleCopyResourceURL(main_bundle, CFSTR_resource_name, NULL, CFSTR_resource_subdirectory);
    CFURLGetFileSystemRepresentation(CFURL_resource_location, TRUE, (UInt8 *)LEAFGAME::GAME2OPS::char_buffer, 1024);

    CFRelease(CFSTR_resource_name);
    CFRelease(CFSTR_resource_subdirectory);
    CFRelease(CFURL_resource_location);

    return LEAFGAME::GAME2OPS::char_buffer;

}

char * LEAFGAME::GAME2OPS::getProgramFileDirectory() {

    char * home = getenv("HOME");
    int i = 0;
    while (home[i]) {
        LEAFGAME::GAME2OPS::char_buffer[i] = home[i];
        i++;
    }

    LEAFGAME::GAME2OPS::char_buffer[i++] = '/';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'L';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'i';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'b';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'r';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'a';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'r';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'y';
    LEAFGAME::GAME2OPS::char_buffer[i++] = '/';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'A';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'p';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'p';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'l';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'i';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'c';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'a';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 't';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'i';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'o';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'n';
    LEAFGAME::GAME2OPS::char_buffer[i++] = ' ';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'S';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'u';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'p';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'p';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'o';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 'r';
    LEAFGAME::GAME2OPS::char_buffer[i++] = 't';
    LEAFGAME::GAME2OPS::char_buffer[i++] = '/';

    int j = 0;
    while (j < 16 && LEAFGAME::GAMEINFO::title[j]) {
        LEAFGAME::GAME2OPS::char_buffer[i++] = LEAFGAME::GAMEINFO::title[j++];
    }
    LEAFGAME::GAME2OPS::char_buffer[i] = 0;
    mkdir(char_buffer, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);

    return LEAFGAME::GAME2OPS::char_buffer;

}

char * LEAFGAME::GAME2OPS::getProgramFileLocation(const char * file_name, const char * file_directory) {

    LEAFGAME::GAME2OPS::getProgramFileDirectory();

    int i = 0;
    while (LEAFGAME::GAME2OPS::char_buffer[i]) {
        i++;
    }
    LEAFGAME::GAME2OPS::char_buffer[i++] = '/';

    int j = 0;
    while (j < 15 && file_directory[j]) {
        LEAFGAME::GAME2OPS::char_buffer[i++] = file_directory[j++];
    }
    LEAFGAME::GAME2OPS::char_buffer[i] = 0;
    mkdir(char_buffer, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
    LEAFGAME::GAME2OPS::char_buffer[i++] = '/';

    j = 0;
    while (j < 15 && file_name[j]) {
        LEAFGAME::GAME2OPS::char_buffer[i++] = file_name[j++];
    }

    LEAFGAME::GAME2OPS::char_buffer[i] = 0;

    return LEAFGAME::GAME2OPS::char_buffer;

}

#endif
