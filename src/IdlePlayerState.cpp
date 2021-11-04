
#include <iostream>
#include "../include/IdlePlayerState.h"
#include "../include/AttackPlayerState.h"
#include "../include/RunRightPlayerState.h"
#include "../include/ThrowAttackPlayerState.h"
#include "../include/AccendLadderPlayerState.h"
#include "../include/DecendLadderPlayerState.h"
#include "../include/JumpPlayerState.h"
#include "../include/DiedPlayerState.h"



PlayerState* IdlePlayerState::handleInput(SDL_Event* input) {

	if(input->key.keysym.sym == SDLK_SPACE)
	{
		return new AttackPlayerState();
	}
	else if (input->key.keysym.sym == SDLK_RIGHT)
	{
		 	return new RunRightPlayerState();
	}
	else if (input->key.keysym.sym == SDLK_UP)
	{
		 	return new JumpPlayerState();
	}
	else if (input->key.keysym.sym == SDLK_t)
	{
		 	return new ThrowAttackPlayerState();
	}
	else if (input->key.keysym.sym == SDLK_a)
	{
		 	return new AccendLadderPlayerState();
	}
	else if (input->key.keysym.sym == SDLK_d)
	{
		 	return new DecendLadderPlayerState();
	}
	else if (input->key.keysym.sym == SDLK_x)
	{
		 	return new DiedPlayerState();
	}

	return nullptr;
}

bool IdlePlayerState::onLadder()
{
	return m_onLadder;
}

void IdlePlayerState::update(Player& player) 
{}

void IdlePlayerState::enter(Player& player) 
{
	
	player.getAnimatedSprite().clearFrames();

	player.getAnimatedSprite().addFrame(3900, 0, 232, 439);
	player.getAnimatedSprite().addFrame(4132, 0, 232, 439);
	player.getAnimatedSprite().addFrame(4364, 0, 232, 439);
	player.getAnimatedSprite().addFrame(3900, 439, 232, 439);
	player.getAnimatedSprite().addFrame(4132, 439, 232, 439);
	player.getAnimatedSprite().addFrame(4364, 439, 232, 439);
	player.getAnimatedSprite().addFrame(3900, 878, 232, 439);
	player.getAnimatedSprite().addFrame(4132, 878, 232, 439);
	player.getAnimatedSprite().addFrame(4364, 878, 232, 439);
	player.getAnimatedSprite().addFrame(3900, 1317, 232, 439);

}

bool IdlePlayerState::repeat()
{
	return m_repeat;
}

void IdlePlayerState::exit(Player& player)
{

}