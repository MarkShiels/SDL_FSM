//#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_surface.h>
#include <SDL_image.h>
#include <iostream>
#include "../include/Player.h"

class Game
{
public:

    Game();
    ~Game();
    void run();

    Player* m_player;
    AnimatedSprite m_sprite;

private:

    void processEvents(SDL_Event event);
    void update();
    void render();
    void loadMedia();
    void cleanUp();

    bool m_gameIsRunning;
    float screenSizeX = 680;
    float screenSizeY = 480;
    
    int m_currentFrame;
    int m_currentTime;
    int m_frameDelay{100};

    SDL_Renderer*   m_renderer;
    SDL_Texture*    m_spriteSheet;
    SDL_Rect*       m_spriteSize;
    PlayerState* m_currentPlayerState;

};