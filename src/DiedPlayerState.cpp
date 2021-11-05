#include "../include/DiedPlayerState.h"
#include "../include/RevivedPlayerState.h"

PlayerState* DiedPlayerState::handleInput(SDL_Event* input)
{
	
	if (input->key.keysym.sym == SDLK_x)
	{
		 	return new RevivedPlayerState();
	}
	return nullptr;
}

void DiedPlayerState::update(Player& player) 
{
	if(player.checkTime())
	{
		
		if(player.getCurrentFrame() < player.getAnimatedSprite().getFrames()->size() -1)
		{
			player.incFrame();
		}
	}
}

bool DiedPlayerState::repeat()
{
	return m_repeat;
}

bool DiedPlayerState::onLadder()
{
	return m_onLadder;
}

void DiedPlayerState::enter(Player& player)
{	
	player.getAnimatedSprite().clearFrames();

	player.getAnimatedSprite().addFrame(2454, 0, 482, 498);
	player.getAnimatedSprite().addFrame(2936, 0, 482, 498);
	player.getAnimatedSprite().addFrame(3418, 0, 482, 498);
	player.getAnimatedSprite().addFrame(2454, 498, 482, 498);
	player.getAnimatedSprite().addFrame(2936, 498, 482, 498);
	player.getAnimatedSprite().addFrame(3418, 498, 482, 498);
	player.getAnimatedSprite().addFrame(2454, 996, 482, 498);
	player.getAnimatedSprite().addFrame(2936, 996, 482, 498);
	player.getAnimatedSprite().addFrame(3418, 996, 482, 498);
	player.getAnimatedSprite().addFrame(2454, 1494, 482, 498);

	player.setAlive(false);

}
void DiedPlayerState::exit(Player& player)
{

}