/*  LEAFGAME GAME CODE NAMESPACE DEFINITION | GAMECODE_ns.h  */
/*  this should be overwritten with actual game code  */

#include "GAMECODE_ns.h"
#include "../GAMEINFO_ns/GAMEINFO_ns.h"
#include "../GAMEFILE_ns/GAMEFILE_ns.h"
#include "../GAME2SDL_ns/GAME2SDL_ns.h"

LEAFGAME::GAME2SDL::Sprite testsprite = 0;

void LEAFGAME::GAMECODE::run() {

    LEAFGAME::GAMEINFO::setTitle("LEAFGAME");
    LEAFGAME::GAME2SDL::open(LEAFGAME::GAMECODE::load, LEAFGAME::GAMECODE::advance, LEAFGAME::GAMECODE::draw, LEAFGAME::GAMECODE::purge);

}

void LEAFGAME::GAMECODE::load() {

}

void LEAFGAME::GAMECODE::advance() {

}

void LEAFGAME::GAMECODE::draw() {

    if (!testsprite) {

        unsigned char spritedata[0xAD];
        testsprite = LEAFGAME::GAME2SDL::loadSprite(LEAFGAME::GAMEFILE::load("testsprite", "sprites", 0xAD, spritedata));
        LEAFGAME::GAMEFILE::save("testsprite", "sprites", 0xAD, spritedata);

    }

    LEAFGAME::GAME2SDL::drawSprite(testsprite, 16, 16);

}

void LEAFGAME::GAMECODE::purge() {
    LEAFGAME::GAME2SDL::purgeSprite(testsprite);
}
