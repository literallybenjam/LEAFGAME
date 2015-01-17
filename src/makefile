apple:
	if [ -e ../leafgame.app ]; then rm -r ../leafgame.app; fi
	if [ -e buildfiles ]; then rm -r buildfiles; fi
	mkdir ../leafgame.app
	mkdir ../leafgame.app/Contents
	mkdir ../leafgame.app/Contents/MacOS
	mkdir ../leafgame.app/Contents/Frameworks
	cp Info.plist ../leafgame.app/Contents/Info.plist
	cp -R !DATA! ../leafgame.app/Contents/Resources
	cp -R /Library/Frameworks/SDL2.framework ../leafgame.app/Contents/Frameworks/SDL2.framework
	cp -R /Library/Frameworks/SDL2_mixer.framework ../leafgame.app/Contents/Frameworks/SDL2_mixer.framework
	mkdir buildfiles
	g++ -o buildfiles/LEAFGAME.o -c LEAFGAME.cc
	g++ -o buildfiles/GAMEINFO_ns.o -c GAMEINFO_ns/GAMEINFO_ns.cc
	g++ -o buildfiles/GAMEFILE_ns.o -c GAMEFILE_ns/GAMEFILE_ns.cc
	g++ -o buildfiles/GAME2OPS_ns.o -c GAME2OPS_ns/GAME2OPS_ns.cc
	g++ -o buildfiles/GAME2SDL_ns.o -c GAME2SDL_ns/GAME2SDL_ns.cc
	g++ -o buildfiles/GAMECODE_ns.o -c GAMECODE_ns/GAMECODE_ns.cc
	g++ -o ../leafgame.app/Contents/MacOS/leafgame -framework SDL2_image -framework SDL2_mixer -framework SDL2 -framework cocoa -rpath @executable_path/../Frameworks buildfiles/*

clean:
	rm -r buildfiles
