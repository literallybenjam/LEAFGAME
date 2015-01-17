/*  LEAFGAME GAME CODE NAMESPACE DEFINITION | GAMECODE_ns.h  */
/*  this should be overwritten with actual game code  */

#include "GAMECODE_ns.h"
#include "../GAMEINFO_ns/GAMEINFO_ns.h"
#include "../GAMEFILE_ns/GAMEFILE_ns.h"
#include "../GAME2SDL_ns/GAME2SDL_ns.h"

void LEAFGAME::GAMECODE::run() {

    LEAFGAME::GAMEINFO::setTitle("LEAFGAME");
    LEAFGAME::GAME2SDL::open(LEAFGAME::GAMECODE::load, LEAFGAME::GAMECODE::advance, LEAFGAME::GAMECODE::draw, LEAFGAME::GAMECODE::purge);

}

void LEAFGAME::GAMECODE::load() {

}

void LEAFGAME::GAMECODE::advance() {

}

void LEAFGAME::GAMECODE::draw() {

}

void LEAFGAME::GAMECODE::purge() {

}
