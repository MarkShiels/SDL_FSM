#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_surface.h>
#include <iostream>
#include "../include/InputHandler.h"

class Game
{
public:

    Game();
    ~Game();
    void run();

private:

    void processEvents(SDL_Event event);
    void update();
    void render();

    void cleanUp();

    InputHandler inputHandler;

    bool m_gameIsRunning;
    float screenSizeX = 680;
    float screenSizeY = 480;
    
   SDL_Renderer* m_renderer;
   SDL_Rect rect;
   SDL_Rect rect2;
   SDL_Rect rect3;
   SDL_Rect rect4;
   SDL_Rect clayMessage;
   SDL_Rect legoMessage;
   SDL_Rect woodMessage;
   SDL_Rect concreteMessage;
   SDL_Texture* messageTxtr;
   SDL_Surface* messageSurface;
   TTF_Font* highman;
   SDL_Color white;

};