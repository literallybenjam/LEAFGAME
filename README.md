#LEAFGAME

a game engine

Currently MacOS only, but programmed in SDL2 so it should be portable. The only platform-specific code is in GAME2OPS_ns. Game code should go in GAMECODE_ns, all other folders/files should be left alone (excepting makefile and Info.plist, where applicable). Game data should be put in folders (1 level deep only rn) inside src/!DATA!.
