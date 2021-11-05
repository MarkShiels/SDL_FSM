#include "../include/Events.h"

#include "../include/JumpAttackPlayerState.h"

#include "../include/RunRightPlayerState.h"
//#include "../include/GlidePlayerState.h"
//#include "../include/DiedPlayerState.h"

PlayerState* JumpAttackPlayerState::handleInput(SDL_Event* input)
{
	
	return nullptr;
}

void JumpAttackPlayerState::update(Player& player) 
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

bool JumpAttackPlayerState::repeat()
{
	return m_repeat;
}

bool JumpAttackPlayerState::onLadder()
{
	return m_onLadder;
}

void JumpAttackPlayerState::enter(Player& player)
{
	player.getAnimatedSprite().clearFrames();

	player.getAnimatedSprite().addFrame(1329, 1992, 504, 522);
	player.getAnimatedSprite().addFrame(1851, 1992, 504, 522);
	player.getAnimatedSprite().addFrame(2373, 1992, 504, 522);
	player.getAnimatedSprite().addFrame(1329, 2514, 504, 522);
	player.getAnimatedSprite().addFrame(1851, 2514, 504, 522);
	player.getAnimatedSprite().addFrame(2373, 2514, 504, 522);
	player.getAnimatedSprite().addFrame(1329, 3036, 504, 522);
	player.getAnimatedSprite().addFrame(1851, 3036, 504, 522);
	player.getAnimatedSprite().addFrame(2373, 3036, 504, 522);
	player.getAnimatedSprite().addFrame(1329, 3558, 504, 522);

}

void JumpAttackPlayerState::exit(Player& player)
{

}