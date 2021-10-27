#include "../include/Game.h"

Game::Game() :
    m_gameIsRunning{ false }
{
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

    m_renderer = SDL_CreateRenderer(window, -1, 0);

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
        if(gameEvent.type == SDL_MOUSEBUTTONUP)
        {         
        }
    }
}

void Game::update()
{}

void Game::render()
{

    SDL_RenderClear(m_renderer);
    
    SDL_SetRenderDrawColor(m_renderer, 255,255,255, 255);

    SDL_RenderPresent(m_renderer);


}

void Game::cleanUp()
{}