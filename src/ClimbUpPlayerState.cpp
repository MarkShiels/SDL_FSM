#include "../include/Events.h"

#include "../include/ClimbUpPlayerState.h"
#include "../include/ClimbDownPlayerState.h"
#include "../include/DecendLadderPlayerState.h"
//#include "../include/ClimbPausePlayerState.h"


PlayerState* ClimbUpPlayerState::handleInput(SDL_Event* input)
{
	
	return nullptr;
}

void ClimbUpPlayerState::update(Player& player) 
{}

bool ClimbUpPlayerState::repeat()
{
	return m_repeat;
}

bool ClimbUpPlayerState::onLadder()
{
	return m_onLadder;
}

void ClimbUpPlayerState::enter(Player& player) 
{
	player.getAnimatedSprite().clearFrames();

	player.getAnimatedSprite().addFrame(1608, 1392, 282, 464);
	player.getAnimatedSprite().addFrame(2172, 928, 282, 464);
	player.getAnimatedSprite().addFrame(1890, 928, 282, 464);
	player.getAnimatedSprite().addFrame(1608, 928, 282, 464);
	player.getAnimatedSprite().addFrame(2172, 464, 282, 464);
	player.getAnimatedSprite().addFrame(1890, 464, 282, 464);
	player.getAnimatedSprite().addFrame(1608, 464, 282, 464);
	player.getAnimatedSprite().addFrame(2172, 0, 282, 464);
	player.getAnimatedSprite().addFrame(1890, 0, 282, 464);
	player.getAnimatedSprite().addFrame(1608, 0, 282, 464);
	

}

void ClimbUpPlayerState::exit(Player& player)
{

}