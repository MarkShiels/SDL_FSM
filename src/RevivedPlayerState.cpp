#include "../include/RevivedPlayerState.h"

#include "../include/DiedPlayerState.h"
#include "../include/IdlePlayerState.h"

PlayerState* RevivedPlayerState::handleInput(SDL_Event* input)
{
	return nullptr;
}

void RevivedPlayerState::update(Player& player) 
{
	if(player.checkTime())
	{
		player.incFrame();

		if(player.getCurrentFrame() >= player.getAnimatedSprite().getFrames()->size() -1)
		{
			player.returnToIdle();
		}
	}
}

bool RevivedPlayerState::repeat()
{
	return m_repeat;
}

bool RevivedPlayerState::onLadder()
{
	return m_onLadder;
}


void RevivedPlayerState::enter(Player& player)
{
	player.getAnimatedSprite().clearFrames();

	player.getAnimatedSprite().addFrame(2454, 1494, 482, 498);
	player.getAnimatedSprite().addFrame(3418, 996, 482, 498);
	player.getAnimatedSprite().addFrame(2936, 996, 482, 498);
	player.getAnimatedSprite().addFrame(2454, 996, 482, 498);
	player.getAnimatedSprite().addFrame(3418, 498, 482, 498);
	player.getAnimatedSprite().addFrame(2936, 498, 482, 498);
	player.getAnimatedSprite().addFrame(2454, 498, 482, 498);
	player.getAnimatedSprite().addFrame(3418, 0, 482, 498);
	player.getAnimatedSprite().addFrame(2936, 0, 482, 498);
	player.getAnimatedSprite().addFrame(2454, 0, 482, 498);
	
	player.setAlive(true);

}

void RevivedPlayerState::exit(Player& player)
{
	
}