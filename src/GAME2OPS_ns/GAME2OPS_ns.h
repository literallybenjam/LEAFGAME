/*  LEAFGAME TO OPERATING SYSTEM NAMESPACE DECLARATION | GAME2OPS_ns.h  */
/*  version 1.0; written as part of the LEAFGAME package  */

#ifndef LEAFGAME_GAME2OPS_NS_H
#define LEAFGAME_GAME2OPS_NS_H

namespace LEAFGAME {
    namespace GAME2OPS {

        char * getResourceLocation(const char * resource_name, const char * resource_subdirectory);
        char * getProgramFileDirectory();
        char * getProgramFileLocation(const char * file_name, const char * file_directory);

        extern char char_buffer[1024];

    }
}

#endif
