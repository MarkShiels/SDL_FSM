#include "../include/Events.h"

#include "../include/ClimbDownPlayerState.h"
#include "../include/AccendLadderPlayerState.h"
#include "../include/RunRightPlayerState.h"


PlayerState* ClimbDownPlayerState::handleInput(SDL_Event* input)
{
	if (input->key.keysym.sym == SDLK_RIGHT)
	{
		 	return new RunRightPlayerState();
	}
	return nullptr;
}

bool ClimbDownPlayerState::repeat()
{
	return m_repeat;
}

bool ClimbDownPlayerState::onLadder()
{
	return m_onLadder;
}

void ClimbDownPlayerState::update(Player& player) 
{
	if(player.checkTime())
	{
		player.incFrame();

		if(player.getCurrentFrame() >= player.getAnimatedSprite().getFrames()->size() -1)
		{
			player.returnToLadder();
		}
	}
}

void ClimbDownPlayerState::enter(Player& player)
{
	player.getAnimatedSprite().clearFrames();

	player.getAnimatedSprite().addFrame(1608, 0, 282, 464);
	player.getAnimatedSprite().addFrame(1890, 0, 282, 464);
	player.getAnimatedSprite().addFrame(2172, 0, 282, 464);
	player.getAnimatedSprite().addFrame(1608, 464, 282, 464);
	player.getAnimatedSprite().addFrame(1890, 464, 282, 464);
	player.getAnimatedSprite().addFrame(2172, 464, 282, 464);
	player.getAnimatedSprite().addFrame(1608, 928, 282, 464);
	player.getAnimatedSprite().addFrame(1890, 928, 282, 464);
	player.getAnimatedSprite().addFrame(2172, 928, 282, 464);
	player.getAnimatedSprite().addFrame(1608, 1392, 282, 464);


}
void ClimbDownPlayerState::exit(Player& player) 
{

}