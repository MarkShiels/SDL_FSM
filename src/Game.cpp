#include "../include/Game.h"

Game::Game()
{   
    m_currentTime = SDL_GetTicks();

    if (SDL_Init(SDL_INIT_VIDEO) < 0) { // also initialises the events subsystem
        std::cout << "Failed to init SDL.\n";      
    }

    SDL_Window *window = SDL_CreateWindow(
        "Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
        screenSizeX, screenSizeY, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);

    if(!window) {
        std::cout << "Failed to create window.\n";}

    if ( TTF_Init() < 0 ) {
	    std::cout << "Error initializing SDL_ttf: " << TTF_GetError() << std::endl;
    }

    //m_renderer = SDL_CreateRenderer(window, -1, 0);

    m_renderer = SDL_CreateRenderer( window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC );
    if( m_renderer == NULL )
    {
         printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
    }

    IMG_Init(IMG_INIT_PNG);
    m_player = new Player();
    loadMedia();

    m_spriteSize->x = 0;
    m_spriteSize->y = 0;
    m_spriteSize->w = 250;
    m_spriteSize->h = 250;

}

void Game::loadMedia()
{
    m_currentFrame = 0;
    m_spriteSheet = IMG_LoadTexture(m_renderer, "../include/PlayerSpriteSheet.png");
    m_sprite.setTexture(m_spriteSheet);
}

    
Game::~Game()
{
    cleanUp();
}
    
void Game::run()
{
    SDL_Event gameEvent;

    m_gameIsRunning = true;
    while (m_gameIsRunning)
    {
        processEvents(gameEvent);
        update();
        render();
    }
}

void Game::processEvents(SDL_Event gameEvent)
{
    while (SDL_PollEvent(&gameEvent) != 0)
    { 
        if(gameEvent.type == SDL_KEYDOWN)
        {
           m_player->handleInput(&gameEvent);
        }
      
    }
}

void Game::update()
{
    m_player->update(SDL_GetTicks());
}

void Game::render()
{

    SDL_RenderClear(m_renderer);
    
    SDL_SetRenderDrawColor(m_renderer, 255,255,255, 255);

    SDL_RenderCopy(m_renderer, m_spriteSheet, m_player->getAnimatedSprite().getFrame(m_player->getCurrentFrame()), m_spriteSize);

    SDL_RenderPresent(m_renderer);
}

void Game::cleanUp()
{}