/*  LEAFGAME GAME INFO NAMESPACE DEFINITION | GAMEINFO_ns.h  */
/*  version 1.0; written as part of the LEAFGAME package  */

#include "GAMEINFO_ns.h"

namespace LEAFGAME {
    namespace GAMEINFO {

        char title[16] = "LEAFGAME";
        int fps = 60;
        int window_width = 512;
        int window_height = 448;
        int viewport_width = 256;
        int viewport_height = 224;
        unsigned char sprite_width = 16;
        unsigned char sprite_height = 16;
        long clear_colour = 0x000000FF;

    }
}

void LEAFGAME::GAMEINFO::setTitle(const char * title) {
    int i = 0;
    while (i < 15 && title[i]) {
        LEAFGAME::GAMEINFO::title[i] = title[i];
        i++;
    }
    LEAFGAME::GAMEINFO::title[i] = 0;
}

void LEAFGAME::GAMEINFO::setViews(int fps, int window_width, int window_height, int viewport_width, int viewport_height, unsigned char sprite_width, unsigned char sprite_height, long clear_colour) {
    LEAFGAME::GAMEINFO::fps = fps;
    LEAFGAME::GAMEINFO::window_width = window_width;
    LEAFGAME::GAMEINFO::window_height = window_height;
    LEAFGAME::GAMEINFO::viewport_width = viewport_width;
    LEAFGAME::GAMEINFO::viewport_height = viewport_height;
    LEAFGAME::GAMEINFO::sprite_width = sprite_width;
    LEAFGAME::GAMEINFO::sprite_height = sprite_height;
    LEAFGAME::GAMEINFO::clear_colour = clear_colour;
}
