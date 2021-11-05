#include "../include/Events.h"

#include "../include/AccendLadderPlayerState.h"
#include "../include/RunRightPlayerState.h"
#include "../include/ClimbDownPlayerState.h"
#include "../include/ClimbUpPlayerState.h"
//#include "../include/DiedPlayerState.h"

PlayerState* AccendLadderPlayerState::handleInput(SDL_Event* input)
{
	if (input->key.keysym.sym == SDLK_DOWN)
	{
		 	return new ClimbDownPlayerState();
	}
	else if (input->key.keysym.sym == SDLK_UP)
	{
		 	return new ClimbUpPlayerState();
	}
	else if (input->key.keysym.sym == SDLK_a)
	{
		 	return new IdlePlayerState();
	}
	else if (input->key.keysym.sym == SDLK_RIGHT)
	{
		 	return new RunRightPlayerState();
	}
	return nullptr;
}

bool AccendLadderPlayerState::repeat()
{
	return m_repeat;
}

bool AccendLadderPlayerState::onLadder()
{
	return m_onLadder;
}

void AccendLadderPlayerState::update(Player& player) 
{
	if(player.checkTime())
	{
		player.incFrame();

		if(player.getCurrentFrame() >= player.getAnimatedSprite().getFrames()->size() -1)
		{
			player.resetFrame();
		}
	}
}

void AccendLadderPlayerState::enter(Player& player)
{	
	player.getAnimatedSprite().clearFrames();
	player.getAnimatedSprite().addFrame(1608, 464, 282, 464);

}
void AccendLadderPlayerState::exit(Player& player)
{
}