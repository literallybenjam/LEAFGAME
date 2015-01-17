/*  LEAFGAME TO SDL NAMESPACE DEFINITION | GAME2SDL_ns.cc  */
/*  version 1.0; written as part of the LEAFGAME package  */

#include "GAME2SDL_ns.h"
#include "../GAMEINFO_ns/GAMEINFO_ns.h"
#include "../GAME2OPS_ns/GAME2OPS_ns.h"

namespace LEAFGAME {
    namespace GAME2SDL {

        bool key_pressed[44] = {false};
        LEAFGAME::GAME2SDL::Application_Window * app;

    }
}

//  EVENT HANDLER  //

int LEAFGAME::GAME2SDL::eventHandler(SDL_Event * event) {

    switch (event -> type) {

        case SDL_USEREVENT:
        switch (event -> user.code) {
            case RENDER_COMPLETE:
            LEAFGAME::GAME2SDL::render();
            break;
        }
        break;

        case SDL_WINDOWEVENT:
        switch (event -> window.event) {
            case SDL_WINDOWEVENT_CLOSE:
            LEAFGAME::GAME2SDL::close();
            break;
        }
        break;

        case SDL_QUIT:
        LEAFGAME::GAME2SDL::close();
        break;

        case SDL_KEYDOWN:
        if (!event -> key.repeat) {
            switch (event -> key.keysym.sym) {
                case SDLK_0:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_0]  = true; break;
                case SDLK_1:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_1]  = true; break;
                case SDLK_2:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_2]  = true; break;
                case SDLK_3:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_3]  = true; break;
                case SDLK_4:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_4]  = true; break;
                case SDLK_5:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_5]  = true; break;
                case SDLK_6:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_6]  = true; break;
                case SDLK_7:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_7]  = true; break;
                case SDLK_8:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_8]  = true; break;
                case SDLK_9:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_9]  = true; break;
                case SDLK_q:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_Q]  = true; break;
                case SDLK_w:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_W]  = true; break;
                case SDLK_e:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_E]  = true; break;
                case SDLK_r:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_R]  = true; break;
                case SDLK_t:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_T]  = true; break;
                case SDLK_y:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_Y]  = true; break;
                case SDLK_u:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_U]  = true; break;
                case SDLK_i:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_I]  = true; break;
                case SDLK_o:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_O]  = true; break;
                case SDLK_p:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_P]  = true; break;
                case SDLK_a:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_A]  = true; break;
                case SDLK_s:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_S]  = true; break;
                case SDLK_d:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_D]  = true; break;
                case SDLK_f:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_F]  = true; break;
                case SDLK_g:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_G]  = true; break;
                case SDLK_h:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_H]  = true; break;
                case SDLK_j:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_J]  = true; break;
                case SDLK_k:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_K]  = true; break;
                case SDLK_l:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_L]  = true; break;
                case SDLK_z:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_Z]  = true; break;
                case SDLK_x:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_X]  = true; break;
                case SDLK_c:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_C]  = true; break;
                case SDLK_v:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_V]  = true; break;
                case SDLK_b:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_B]  = true; break;
                case SDLK_n:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_N]  = true; break;
                case SDLK_m:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_M]  = true; break;
                case SDLK_SPACE:  LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_SP] = true; break;
                case SDLK_RETURN: LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_RN] = true; break;
                case SDLK_ESCAPE: LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_EC] = true; break;
                case SDLK_TAB:    LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_TB] = true; break;
                case SDLK_UP:     LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_UP] = true; break;
                case SDLK_LEFT:   LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_LF] = true; break;
                case SDLK_DOWN:   LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_DN] = true; break;
                case SDLK_RIGHT:  LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_RT] = true; break;
            }
        }
        break;

        case SDL_KEYUP:
        switch (event -> key.keysym.sym) {
            case SDLK_0:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_0]  = false; break;
            case SDLK_1:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_1]  = false; break;
            case SDLK_2:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_2]  = false; break;
            case SDLK_3:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_3]  = false; break;
            case SDLK_4:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_4]  = false; break;
            case SDLK_5:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_5]  = false; break;
            case SDLK_6:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_6]  = false; break;
            case SDLK_7:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_7]  = false; break;
            case SDLK_8:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_8]  = false; break;
            case SDLK_9:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_9]  = false; break;
            case SDLK_q:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_Q]  = false; break;
            case SDLK_w:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_W]  = false; break;
            case SDLK_e:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_E]  = false; break;
            case SDLK_r:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_R]  = false; break;
            case SDLK_t:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_T]  = false; break;
            case SDLK_y:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_Y]  = false; break;
            case SDLK_u:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_U]  = false; break;
            case SDLK_i:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_I]  = false; break;
            case SDLK_o:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_O]  = false; break;
            case SDLK_p:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_P]  = false; break;
            case SDLK_a:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_A]  = false; break;
            case SDLK_s:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_S]  = false; break;
            case SDLK_d:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_D]  = false; break;
            case SDLK_f:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_F]  = false; break;
            case SDLK_g:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_G]  = false; break;
            case SDLK_h:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_H]  = false; break;
            case SDLK_j:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_J]  = false; break;
            case SDLK_k:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_K]  = false; break;
            case SDLK_l:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_L]  = false; break;
            case SDLK_z:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_Z]  = false; break;
            case SDLK_x:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_X]  = false; break;
            case SDLK_c:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_C]  = false; break;
            case SDLK_v:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_V]  = false; break;
            case SDLK_b:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_B]  = false; break;
            case SDLK_n:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_N]  = false; break;
            case SDLK_m:      LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_M]  = false; break;
            case SDLK_SPACE:  LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_SP] = false; break;
            case SDLK_RETURN: LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_RN] = false; break;
            case SDLK_ESCAPE: LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_EC] = false; break;
            case SDLK_TAB:    LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_TB] = false; break;
            case SDLK_UP:     LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_UP] = false; break;
            case SDLK_LEFT:   LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_LF] = false; break;
            case SDLK_DOWN:   LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_DN] = false; break;
            case SDLK_RIGHT:  LEAFGAME::GAME2SDL::key_pressed[LEAFGAME::GAME2SDL::K_RT] = false; break;
        }
        break;

    }

    return 0;

}

//  POINTER CONSTRUCTORS  //

LEAFGAME::GAME2SDL::Application_Window * LEAFGAME::GAME2SDL::createApplicationWindow(const char * application_title, void (* init)(), void (* logic)(), void (* draw)(), void (* purge)(), int fps, int window_width, int window_height, int viewport_width, int viewport_height, unsigned char viewport_unit, unsigned char sprite_width, unsigned char sprite_height, long clear_colour) {

    LEAFGAME::GAME2SDL::Application_Window * app;
    app = new LEAFGAME::GAME2SDL::Application_Window;

    //  Creates a centred hi-res OpenGL (to get highdpi size) resizable SDL_Window
    app -> frame = SDL_CreateWindow(application_title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, window_width, window_height,  SDL_WINDOW_ALLOW_HIGHDPI | SDL_WINDOW_RESIZABLE | SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);

    //  Creates an accelerated vsync renderer
    app -> renderer = SDL_CreateRenderer(app -> frame, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    //  Sets up function pointers

    app -> init = init;
    app -> logic = logic;
    app -> draw = draw;
    app -> purge = purge;

    //  Creates a viewport rect
    app -> viewport = new SDL_Rect;
    app -> fps = fps;
    app -> window_width = window_width;
    app -> window_height = window_height;
    app -> viewport_width = viewport_width;
    app -> viewport_height = viewport_height;
    app -> viewport_unit = viewport_unit;
    app -> sprite_width = sprite_width;
    app -> sprite_height = sprite_height;
    app -> clear_colour = clear_colour;
    app -> close = false;

    return app;

}

// POINTER DESTRUCTORS //

void LEAFGAME::GAME2SDL::destroyApplicationWindow(LEAFGAME::GAME2SDL::Application_Window * app) {
    SDL_DestroyWindow(app -> frame);
    SDL_DestroyRenderer(app -> renderer);
    delete app -> viewport;
    delete app;
}

//  PUSH USER EVENTS  //

int LEAFGAME::GAME2SDL::pushUserEvent(LEAFGAME::GAME2SDL::User_Event_Code code) {
    SDL_Event user_event;
    user_event.type = SDL_USEREVENT;
    user_event.user.code = code;
    user_event.user.data1 = NULL;
    user_event.user.data2 = NULL;
    return SDL_PushEvent(&user_event);
}

//  OPEN AND INITIALIZE  //

void LEAFGAME::GAME2SDL::open(void (* init)(), void (* logic)(), void (* draw)(), void (*purge)()) {

    //  Initializes video, timers, events
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_AUDIO);
    SDL_TimerID logic_timer;
    SDL_Event event;

    //  Sets "hints" as to behaviour
    SDL_SetHint("SDL_HINT_MAC_CTRL_CLICK_EMULATE_RIGHT_CLICK", "1"); //  Emulate right clicking on Macs
    SDL_SetHint("SDL_HINT_VIDEO_MAC_FULLSCREEN_SPACES", "1");        //  Allow use of Spaces on Macs
    SDL_SetHint("SDL_HINT_RENDER_SCALE_QUALITY", "nearest");         //  Set scaling function to 'nearest'

    //  Initialize images
    IMG_Init(IMG_INIT_PNG);

    //  Initialize audio mixer
    Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, 2, 2048);

    //  Creates a centered window supporting high DPI and resizing
    LEAFGAME::GAME2SDL::app = LEAFGAME::GAME2SDL::createApplicationWindow(LEAFGAME::GAMEINFO::title, init, logic, draw, purge, LEAFGAME::GAMEINFO::fps, LEAFGAME::GAMEINFO::window_width, LEAFGAME::GAMEINFO::window_height, LEAFGAME::GAMEINFO::viewport_width, LEAFGAME::GAMEINFO::viewport_height, 1, LEAFGAME::GAMEINFO::sprite_width, LEAFGAME::GAMEINFO::sprite_height, LEAFGAME::GAMEINFO::clear_colour);

    if (LEAFGAME::GAME2SDL::app -> init) LEAFGAME::GAME2SDL::app -> init();

    LEAFGAME::GAME2SDL::app -> close = false;

    //  Logic loop
    logic_timer = SDL_AddTimer(1000./LEAFGAME::GAME2SDL::app -> fps, LEAFGAME::GAME2SDL::advance, NULL);

    //  Begin render loop
    LEAFGAME::GAME2SDL::render();

    //  Event watch
    while (SDL_WaitEvent(&event)) {
        LEAFGAME::GAME2SDL::eventHandler(&event);
        if (LEAFGAME::GAME2SDL::app -> close) {
            if (LEAFGAME::GAME2SDL::app -> purge) LEAFGAME::GAME2SDL::app -> purge();
            LEAFGAME::GAME2SDL::destroyApplicationWindow(LEAFGAME::GAME2SDL::app);
            Mix_Quit();
            SDL_Quit();
            break;
        }
    }

}

//  LOGIC  //

Uint32 LEAFGAME::GAME2SDL::advance(Uint32 interval, void * parameter) {

    //  Runs logic code
    if (LEAFGAME::GAME2SDL::app -> logic) LEAFGAME::GAME2SDL::app -> logic();

    //  Exits if LEAFGAME::GAME2SDL::app -> close, else runs again
    if (LEAFGAME::GAME2SDL::app -> close) return 0;
    else return interval;

}

//  RENDERER  //

void LEAFGAME::GAME2SDL::render() {

    //  Gets current window size
    SDL_GL_GetDrawableSize(LEAFGAME::GAME2SDL::app -> frame, &(LEAFGAME::GAME2SDL::app -> window_width), &(LEAFGAME::GAME2SDL::app -> window_height));

    //  Sets the scale of the viewport
    if (static_cast<float>(LEAFGAME::GAME2SDL::app -> window_width) / LEAFGAME::GAME2SDL::app -> viewport_width < static_cast<float>(LEAFGAME::GAME2SDL::app -> window_height) / LEAFGAME::GAME2SDL::app -> viewport_height) LEAFGAME::GAME2SDL::app -> viewport_scale = static_cast<float>(LEAFGAME::GAME2SDL::app -> window_width) / LEAFGAME::GAME2SDL::app -> viewport_width;
    else LEAFGAME::GAME2SDL::app -> viewport_scale = static_cast<float>(LEAFGAME::GAME2SDL::app -> window_height) / LEAFGAME::GAME2SDL::app -> viewport_height;

    int unit = LEAFGAME::GAME2SDL::app -> viewport_unit * LEAFGAME::GAME2SDL::app -> viewport_scale;

    //  Sets the size of the viewport rect based on viewport_width/viewport_height and viewport_scale
    LEAFGAME::GAME2SDL::app -> viewport -> w = (LEAFGAME::GAME2SDL::app -> viewport_width / LEAFGAME::GAME2SDL::app -> viewport_unit) * unit;
    LEAFGAME::GAME2SDL::app -> viewport -> h = (LEAFGAME::GAME2SDL::app -> viewport_height / LEAFGAME::GAME2SDL::app -> viewport_unit) * unit;

    //  Centers the viewport rect in the window
    LEAFGAME::GAME2SDL::app -> viewport -> x = (LEAFGAME::GAME2SDL::app -> window_width - LEAFGAME::GAME2SDL::app -> viewport -> w) / 2;
    LEAFGAME::GAME2SDL::app -> viewport -> y = (LEAFGAME::GAME2SDL::app -> window_height - LEAFGAME::GAME2SDL::app -> viewport -> h) / 2;

    //  Sets the viewport rect as the new viewport
    SDL_RenderSetViewport(LEAFGAME::GAME2SDL::app -> renderer, LEAFGAME::GAME2SDL::app -> viewport);

    //  Clears the viewport
    SDL_SetRenderDrawColor(LEAFGAME::GAME2SDL::app -> renderer, (LEAFGAME::GAME2SDL::app -> clear_colour & 0xFF000000) >> 24, (LEAFGAME::GAME2SDL::app -> clear_colour & 0x00FF0000) >> 16, (LEAFGAME::GAME2SDL::app -> clear_colour & 0x0000FF00) >> 8, LEAFGAME::GAME2SDL::app -> clear_colour & 0x000000FF);
    SDL_SetRenderDrawBlendMode(LEAFGAME::GAME2SDL::app -> renderer, SDL_BLENDMODE_BLEND);
    SDL_RenderClear(LEAFGAME::GAME2SDL::app -> renderer);

    //  Runs draw function
    if (LEAFGAME::GAME2SDL::app -> draw) LEAFGAME::GAME2SDL::app -> draw();

    //  Presents the render and lets SDL know it is ready for another call
    SDL_RenderPresent(LEAFGAME::GAME2SDL::app -> renderer);
    pushUserEvent(LEAFGAME::GAME2SDL::RENDER_COMPLETE);

}

//  CHECK KEYPRESSES  //

bool LEAFGAME::GAME2SDL::isPressed(LEAFGAME::GAME2SDL::Key key, bool lift) {
    bool r = LEAFGAME::GAME2SDL::key_pressed[key];
    if (lift) LEAFGAME::GAME2SDL::key_pressed[key] = false;
    return r;
}

//  FULLSCREEN  //

void LEAFGAME::GAME2SDL::toggleFullscreen() {
    if (SDL_GetWindowFlags(LEAFGAME::GAME2SDL::app -> frame) & SDL_WINDOW_FULLSCREEN_DESKTOP) SDL_SetWindowFullscreen(LEAFGAME::GAME2SDL::app -> frame, 0);
    else SDL_SetWindowFullscreen(LEAFGAME::GAME2SDL::app -> frame, SDL_WINDOW_FULLSCREEN_DESKTOP);
}

//  QUIT  //

void LEAFGAME::GAME2SDL::close() {
    LEAFGAME::GAME2SDL::app -> close = true;
}

//  SPRITE HANDLING  //

LEAFGAME::GAME2SDL::Sprite LEAFGAME::GAME2SDL::loadSprite(const char * source_file, const char * source_location) {
    return IMG_LoadTexture(LEAFGAME::GAME2SDL::app -> renderer, LEAFGAME::GAME2OPS::getResourceLocation(source_file, source_location));
}

void LEAFGAME::GAME2SDL::modSprite(LEAFGAME::GAME2SDL::Sprite sprite, unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
    if (!sprite) return;
    SDL_SetTextureColorMod(sprite, r, g, b);
    SDL_SetTextureAlphaMod(sprite, a);
}

LEAFGAME::GAME2SDL::Sprite LEAFGAME::GAME2SDL::composeSprites(const LEAFGAME::GAME2SDL::Sprite * sprites, unsigned char length) {
    Uint32 format = 0;
    int w = 0;
    int h = 0;
    SDL_QueryTexture(sprites[0], &format, NULL, &w, &h);
    LEAFGAME::GAME2SDL::Sprite sprite = SDL_CreateTexture(LEAFGAME::GAME2SDL::app -> renderer, format, SDL_TEXTUREACCESS_TARGET, w, h);
    SDL_SetTextureBlendMode(sprite, SDL_BLENDMODE_BLEND);
    SDL_SetRenderTarget(LEAFGAME::GAME2SDL::app -> renderer, sprite);
    SDL_SetRenderDrawColor(LEAFGAME::GAME2SDL::app -> renderer, 0, 0, 0, 0);
    SDL_RenderClear(LEAFGAME::GAME2SDL::app -> renderer);
    for (int i = 0; i < length; i++) {
        SDL_RenderCopy(LEAFGAME::GAME2SDL::app -> renderer, sprites[i], NULL, NULL);
    }
    SDL_SetRenderTarget(LEAFGAME::GAME2SDL::app -> renderer, NULL);
    return sprite;
}

void LEAFGAME::GAME2SDL::drawSprite(LEAFGAME::GAME2SDL::Sprite sprite, int x, int y) {

    if (!sprite) return;

    //  Gets unit size
    int unit = LEAFGAME::GAME2SDL::app -> viewport_scale * LEAFGAME::GAME2SDL::app -> viewport_unit;

    //  Creates a unit rectangle
    SDL_Rect unit_rect;
    unit_rect.x = unit * x;
    unit_rect.y = unit * y;
    unit_rect.w = unit * LEAFGAME::GAME2SDL::app -> sprite_width;
    unit_rect.h = unit * LEAFGAME::GAME2SDL::app -> sprite_height;

    //  Draws the sprite to the unit rectangle
    SDL_RenderCopy(LEAFGAME::GAME2SDL::app -> renderer, sprite, NULL, &unit_rect);

}

void LEAFGAME::GAME2SDL::purgeSprite(LEAFGAME::GAME2SDL::Sprite & sprite) {
    if (!sprite) return;
    SDL_DestroyTexture(sprite);
    sprite = 0;
}

//  SHEET HANDLING  //

LEAFGAME::GAME2SDL::Sheet LEAFGAME::GAME2SDL::loadSheet(const char * source_file, const char * source_location) {

    //  Sets up variables
    LEAFGAME::GAME2SDL::Sheet sheet = new LEAFGAME::GAME2SDL::Sheet_Struct;
    int width;
    int height;

    //  Loads the texture
    sheet -> texture = IMG_LoadTexture(LEAFGAME::GAME2SDL::app -> renderer, LEAFGAME::GAME2OPS::getResourceLocation(source_file, source_location));

    //  Gets the width and height
    SDL_QueryTexture(sheet -> texture, 0, 0, &width, &height);
    sheet -> width = width / LEAFGAME::GAME2SDL::app -> sprite_width;
    sheet -> height = height / LEAFGAME::GAME2SDL::app -> sprite_height;

    //  Returns the sheet
    return sheet;

}

void LEAFGAME::GAME2SDL::modSheet(LEAFGAME::GAME2SDL::Sheet sheet, unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
    if (!sheet) return;
    SDL_SetTextureColorMod(sheet -> texture, r, g, b);
    SDL_SetTextureAlphaMod(sheet -> texture, a);
}

LEAFGAME::GAME2SDL::Sheet LEAFGAME::GAME2SDL::composeSheets(const LEAFGAME::GAME2SDL::Sheet * sheets, unsigned char length) {
    LEAFGAME::GAME2SDL::Sheet sheet = new LEAFGAME::GAME2SDL::Sheet_Struct;
    Uint32 format = 0;
    int w = 0;
    int h = 0;
    SDL_QueryTexture(sheets[0] -> texture, &format, NULL, &w, &h);
    sheet -> texture = SDL_CreateTexture(LEAFGAME::GAME2SDL::app -> renderer, format, SDL_TEXTUREACCESS_TARGET, w, h);
    SDL_SetTextureBlendMode(sheet -> texture, SDL_BLENDMODE_BLEND);
    SDL_SetRenderTarget(LEAFGAME::GAME2SDL::app -> renderer, sheet -> texture);
    SDL_SetRenderDrawColor(LEAFGAME::GAME2SDL::app -> renderer, 0, 0, 0, 0);
    SDL_RenderClear(LEAFGAME::GAME2SDL::app -> renderer);
    for (int i = 0; i < length; i++) {
        SDL_RenderCopy(LEAFGAME::GAME2SDL::app -> renderer, sheets[i] -> texture, NULL, NULL);
    }
    SDL_SetRenderTarget(LEAFGAME::GAME2SDL::app -> renderer, NULL);
    return sheet;
}

void LEAFGAME::GAME2SDL::drawSpriteFromSheet(LEAFGAME::GAME2SDL::Sheet sheet, int x, int y, unsigned char i, unsigned char j) {

    if (!sheet) return;

    //  Gets unit size
    int unit = LEAFGAME::GAME2SDL::app -> viewport_scale * LEAFGAME::GAME2SDL::app -> viewport_unit;

    //  Creates clip rectangle
    SDL_Rect clip_rect;
    clip_rect.x = i * LEAFGAME::GAME2SDL::app -> sprite_width;
    clip_rect.y = j * LEAFGAME::GAME2SDL::app -> sprite_height;
    clip_rect.w = LEAFGAME::GAME2SDL::app -> sprite_width;
    clip_rect.h = LEAFGAME::GAME2SDL::app -> sprite_height;

    //  Creates output rectangle
    SDL_Rect output_rect;
    output_rect.x = unit * x;
    output_rect.y = unit * y;
    output_rect.w = unit * LEAFGAME::GAME2SDL::app -> sprite_width;
    output_rect.h = unit * LEAFGAME::GAME2SDL::app -> sprite_height;

    //  Draws the clipped sheet to the output rectangle
    SDL_SetRenderDrawBlendMode(LEAFGAME::GAME2SDL::app -> renderer, SDL_BLENDMODE_BLEND);
    SDL_RenderCopy(LEAFGAME::GAME2SDL::app -> renderer, sheet -> texture, &clip_rect, &output_rect);

}

void LEAFGAME::GAME2SDL::drawSheet(LEAFGAME::GAME2SDL::Sheet sheet, int x, int y, unsigned char i, unsigned char j, unsigned char w, unsigned char h) {

    if (!sheet) return;

    //  Sets width and height
    int width = w; int height = h;
    if (sheet -> width - i < w) width = sheet -> width - i;
    if (sheet -> height - j < h) height = sheet -> height - j;
    if (width < 0) width = 0;
    if (height < 0) height = 0;

    //  Gets unit size
    int unit = LEAFGAME::GAME2SDL::app -> viewport_scale * LEAFGAME::GAME2SDL::app -> viewport_unit;

    //  Creates clip rectangle
    SDL_Rect clip_rect;
    clip_rect.x = i * LEAFGAME::GAME2SDL::app -> sprite_width;
    clip_rect.y = j * LEAFGAME::GAME2SDL::app -> sprite_height;
    clip_rect.w = width * LEAFGAME::GAME2SDL::app -> sprite_width;
    clip_rect.h = height * LEAFGAME::GAME2SDL::app -> sprite_height;

    //  Creates output rectangle
    SDL_Rect output_rect;
    output_rect.x = unit * x;
    output_rect.y = unit * y;
    output_rect.w = unit * width * LEAFGAME::GAME2SDL::app -> sprite_width;
    output_rect.h = unit * height * LEAFGAME::GAME2SDL::app -> sprite_height;

    //  Draws the clipped sheet to the output rectangle
    SDL_RenderCopy(LEAFGAME::GAME2SDL::app -> renderer, sheet -> texture, &clip_rect, &output_rect);

}

void LEAFGAME::GAME2SDL::purgeSheet(LEAFGAME::GAME2SDL::Sheet & sheet) {
    if (!sheet) return;
    SDL_DestroyTexture(sheet -> texture);
    delete sheet;
    sheet = 0;
}

//  SOUND HANDLING  //

LEAFGAME::GAME2SDL::Sound LEAFGAME::GAME2SDL::loadSound(const char * source_file, const char * source_location) {
    return Mix_LoadWAV(LEAFGAME::GAME2OPS::getResourceLocation(source_file, source_location));
}

void LEAFGAME::GAME2SDL::playSound(LEAFGAME::GAME2SDL::Sound sound, int repeats) {
    if (!sound) return;
    Mix_PlayChannel(-1, sound, repeats);
}

void LEAFGAME::GAME2SDL::purgeSound(LEAFGAME::GAME2SDL::Sound & sound) {
    if (!sound) return;
    Mix_FreeChunk(sound);
    sound = 0;
}

//  SONG HANDLING  //

LEAFGAME::GAME2SDL::Song LEAFGAME::GAME2SDL::loadSong(const char * source_file, const char * source_location) {
    return Mix_LoadMUS(LEAFGAME::GAME2OPS::getResourceLocation(source_file, source_location));
}

void LEAFGAME::GAME2SDL::playSong(LEAFGAME::GAME2SDL::Song song, bool forever) {
    if (!song) return;
    int repeats = 0;
    if (forever) repeats = -1;
    Mix_PlayMusic(song, repeats);
}

void LEAFGAME::GAME2SDL::fadeInSong(LEAFGAME::GAME2SDL::Song song, bool forever) {
    if (!song) return;
    Mix_FadeOutMusic(500);
    int repeats = 0;
    if (forever) repeats = -1;
    Mix_FadeInMusic(song, repeats, 500);
}

void LEAFGAME::GAME2SDL::fadeOutSong() {
    Mix_FadeOutMusic(500);
}

void LEAFGAME::GAME2SDL::stopSong() {
    Mix_HaltMusic();
}

void LEAFGAME::GAME2SDL::purgeSong(LEAFGAME::GAME2SDL::Song & song) {
    if (!song) return;
    Mix_FreeMusic(song);
    song = 0;
}
