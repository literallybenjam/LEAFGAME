/*  LEAFGAME TO SDL NAMESPACE DECLARATION | GAME2SDL_ns.h  */
/*  version 1.0; written as part of the LEAFGAME package  */

#ifndef LEAFGAME_GAME2SDL_NS_H
#define LEAFGAME_GAME2SDL_NS_H

#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <SDL2_mixer/SDL_mixer.h>

//  SDL NAMESPACE  //

namespace LEAFGAME {
    namespace GAME2SDL {

        enum User_Event_Code {
            RENDER_COMPLETE = 0
        };
        enum Key {
            K_0 =  0,
            K_1 =  1,
            K_2 =  2,
            K_3 =  3,
            K_4 =  4,
            K_5 =  5,
            K_6 =  6,
            K_7 =  7,
            K_8 =  8,
            K_9 =  9,
            K_Q = 10,
            K_W = 11,
            K_E = 12,
            K_R = 13,
            K_T = 14,
            K_Y = 15,
            K_U = 16,
            K_I = 17,
            K_O = 18,
            K_P = 19,
            K_A = 20,
            K_S = 21,
            K_D = 22,
            K_F = 23,
            K_G = 24,
            K_H = 25,
            K_J = 26,
            K_K = 27,
            K_L = 28,
            K_Z = 29,
            K_X = 30,
            K_C = 31,
            K_V = 32,
            K_B = 33,
            K_N = 34,
            K_M = 35,
            K_SP = 36,  //  Space
            K_RN = 37,  //  Return
            K_EC = 38,  //  Escape
            K_TB = 39,  //  Tab
            K_UP = 40,  //  Up
            K_LF = 41,  //  Left
            K_DN = 42,  //  Down
            K_RT = 43   //  Right
        };

        struct Sheet_Struct {
            SDL_Texture * texture;
            int width;
            int height;
        };
        struct Application_Window {       //  Application window structure
            SDL_Window * frame;           //  - SDL_Window object
            SDL_Renderer * renderer;      //  - SDL_Renderer object
            SDL_Rect * viewport;          //  - SDL viewport
            void (* init)();              //  - Init function
            void (* logic)();             //  - Logic function
            void (* draw)();              //  - Draw function
            void (* purge)();             //  - Purge function (called before annihilation)
            int fps;               //  - Rate at which logic fires
            int window_width;             //  - Width of the window
            int window_height;            //  - Height of the window
            int viewport_width;           //  - Width of the viewport
            int viewport_height;          //  - Height of the viewport
            unsigned char viewport_unit;  //  - Size of a viewport unit
            float viewport_scale;         //  - Pixels per viewport unit
            unsigned char sprite_width;   //  - Width of a sprite (in viewport units)
            unsigned char sprite_height;  //  - Height of a sprite (in viewport units)
            long clear_colour;            //  - Clear colour for the window (0xRRGGBBAA)
            bool close;                   //  - Wheather the window should be closed
        };

        typedef SDL_Texture * Sprite;
        typedef Sheet_Struct * Sheet;
        typedef Mix_Chunk * Sound;
        typedef Mix_Music * Song;

        LEAFGAME::GAME2SDL::Application_Window * createApplicationWindow(const char * application_title = "LEAFGAME", void (* init)() = 0, void (* logic)() = 0, void (* draw)() = 0, void (* purge)() = 0, int fps = 60, int window_width = 512, int window_height = 448, int viewport_width = 256, int viewport_height = 224, unsigned char viewport_unit = 1, unsigned char sprite_width = 16, unsigned char sprite_height = 16, long clear_colour = 0x000000FF);
        void destroyApplicationWindow(LEAFGAME::GAME2SDL::Application_Window * window);

        int eventHandler(SDL_Event * event);

        void open(void (* init)() = 0, void (* logic)() = 0, void (* draw)() = 0, void (*purge)() = 0);
        Uint32 advance(Uint32 interval, void * parameter);
        void render();
        bool isPressed(LEAFGAME::GAME2SDL::Key key, bool lift = true);
        void toggleFullscreen();
        int pushUserEvent(LEAFGAME::GAME2SDL::User_Event_Code code);
        void close();

        LEAFGAME::GAME2SDL::Sprite loadSprite(const char * source_file, const char * source_dir);
        void modSprite(LEAFGAME::GAME2SDL::Sprite sprite, unsigned char r, unsigned char g, unsigned char b, unsigned char a = 255);
        LEAFGAME::GAME2SDL::Sprite composeSprites(const LEAFGAME::GAME2SDL::Sprite * sprites, unsigned char length);
        void drawSprite(LEAFGAME::GAME2SDL::Sprite sprite, int x, int y);
        void purgeSprite(LEAFGAME::GAME2SDL::Sprite & sprite);

        LEAFGAME::GAME2SDL::Sheet loadSheet(const char * source_file, const char * source_dir);
        void modSheet(LEAFGAME::GAME2SDL::Sheet sheet, unsigned char r, unsigned char g, unsigned char b, unsigned char a=255);
        LEAFGAME::GAME2SDL::Sheet composeSheets(const LEAFGAME::GAME2SDL::Sheet * sheets, unsigned char length);
        void drawSpriteFromSheet(LEAFGAME::GAME2SDL::Sheet sheet, int x, int y, unsigned char i, unsigned char j);
        void drawSheet(LEAFGAME::GAME2SDL::Sheet sheet, int x = 0, int y = 0, unsigned char i = 0, unsigned char j = 0, unsigned char w = 255, unsigned char h = 255);
        void purgeSheet(LEAFGAME::GAME2SDL::Sheet & sheet);

        LEAFGAME::GAME2SDL::Sound loadSound(const char * source_file, const char * source_dir);
        void playSound(LEAFGAME::GAME2SDL::Sound sound, int repeats = 0);
        void purgeSound(LEAFGAME::GAME2SDL::Sound & sound);

        LEAFGAME::GAME2SDL::Song loadSong(const char * source_file, const char * source_dir);
        void playSong(LEAFGAME::GAME2SDL::Song song, bool forever = true);
        void fadeInSong(LEAFGAME::GAME2SDL::Song song, bool forever = true);
        void fadeOutSong();
        void stopSong();
        void purgeSong(LEAFGAME::GAME2SDL::Song & song);

        extern LEAFGAME::GAME2SDL::Application_Window * app;
        extern bool key_pressed[44];

    }
}

#endif
