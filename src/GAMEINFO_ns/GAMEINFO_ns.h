/*  LEAFGAME GAME INFO NAMESPACE DECLARATION | GAMEINFO_ns.h  */
/*  version 1.0; written as part of the LEAFGAME package  */

#ifndef LEAFGAME_GAMEINFO_NS_H
#define LEAFGAME_GAMEINFO_NS_H

namespace LEAFGAME {
    namespace GAMEINFO {

        extern char title[16];
        extern int fps;
        extern int window_width;
        extern int window_height;
        extern int viewport_width;
        extern int viewport_height;
        extern unsigned char sprite_width;
        extern unsigned char sprite_height;
        extern long clear_colour;

        void setTitle(const char * title);
        void setViews(int fps, int window_width = 512, int window_height = 448, int viewport_width = 256, int viewport_height = 224, unsigned char sprite_width = 16, unsigned char sprite_height = 16, long clear_colour = 0x000000FF);

    }
}

#endif
