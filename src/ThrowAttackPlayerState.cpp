
#include "../include/ThrowAttackPlayerState.h"

/*
#include <RunRightPlayerState.h>
#include <IdlePlayerState.h>
#include <DiedPlayerState.h>
*/

PlayerState* ThrowAttackPlayerState::handleInput(SDL_Event* input)
{
	return nullptr;
}

bool ThrowAttackPlayerState::repeat()
{
	return m_repeat;
}

bool ThrowAttackPlayerState::onLadder()
{
	return m_onLadder;
}

void ThrowAttackPlayerState::update(Player& player) 
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

void ThrowAttackPlayerState::enter(Player& player)
{
	player.getAnimatedSprite().clearFrames();

	player.getAnimatedSprite().addFrame(6075, 0, 377, 451);
	player.getAnimatedSprite().addFrame(6452, 0, 377, 451);
	player.getAnimatedSprite().addFrame(6829, 0, 377, 451);
	player.getAnimatedSprite().addFrame(6075, 451, 377, 451);
	player.getAnimatedSprite().addFrame(6452, 451, 377, 451);
	player.getAnimatedSprite().addFrame(6829, 451, 377, 451);
	player.getAnimatedSprite().addFrame(6075, 902, 377, 451);
	player.getAnimatedSprite().addFrame(6452, 902, 377, 451);
	player.getAnimatedSprite().addFrame(6829, 902,377, 451);
	player.getAnimatedSprite().addFrame(6075, 1353, 377, 451);

}
void ThrowAttackPlayerState::exit(Player& player)
{
}