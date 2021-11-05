

#include "../include/JumpThrowAttackPlayerState.h"

//#include <GlidePlayerState.h>
//#include <DiedPlayerState.h>

PlayerState* JumpThrowAttackPlayerState::handleInput(SDL_Event* input)
{
	
	return nullptr;
}

void JumpThrowAttackPlayerState::update(Player& player) 
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

bool JumpThrowAttackPlayerState::repeat()
{
	return m_repeat;
}

bool JumpThrowAttackPlayerState::onLadder()
{
	return m_onLadder;
}

void JumpThrowAttackPlayerState::enter(Player& player)//
{
	player.getAnimatedSprite().clearFrames();

	player.getAnimatedSprite().addFrame(4596, 0, 360, 431);
	player.getAnimatedSprite().addFrame(4956, 0, 360, 431);
	player.getAnimatedSprite().addFrame(5316, 0, 360, 431);
	player.getAnimatedSprite().addFrame(4596, 431, 360, 431);
	player.getAnimatedSprite().addFrame(4956, 431, 360, 431);
	player.getAnimatedSprite().addFrame(5316, 431, 360, 431);
	player.getAnimatedSprite().addFrame(4596, 862, 360, 431);
	player.getAnimatedSprite().addFrame(4956, 862, 360, 431);
	player.getAnimatedSprite().addFrame(5316, 862, 360, 431);
	player.getAnimatedSprite().addFrame(4596, 1293, 360, 431);

}
void JumpThrowAttackPlayerState::exit(Player& player)
{

}