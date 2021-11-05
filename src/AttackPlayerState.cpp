#include "../include/Events.h"

#include "../include/AttackPlayerState.h"
#include "../include/IdlePlayerState.h"

//#include "../include/RunRightPlayerState.h"
//#include "../include/DiedPlayerState.h"

PlayerState* AttackPlayerState::handleInput(SDL_Event* input)
{	
	return nullptr;
}

void AttackPlayerState::update(Player& player) 
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

bool AttackPlayerState::onLadder()
{
	return m_onLadder;
}

bool AttackPlayerState::repeat()
{
	return m_repeat;
}

void AttackPlayerState::enter(Player& player)
{
	player.getAnimatedSprite().clearFrames();

	player.getAnimatedSprite().addFrame(0, 0, 536, 495);
	player.getAnimatedSprite().addFrame(536, 0, 536, 495);
	player.getAnimatedSprite().addFrame(1072, 0, 536, 495);
	player.getAnimatedSprite().addFrame(0, 495, 536, 495);
	player.getAnimatedSprite().addFrame(536, 495, 536, 495);
	player.getAnimatedSprite().addFrame(1072, 495, 536, 495);
	player.getAnimatedSprite().addFrame(0, 990, 536, 495);
	player.getAnimatedSprite().addFrame(536, 990, 536, 495);
	player.getAnimatedSprite().addFrame(1072, 990, 536, 495);
	player.getAnimatedSprite().addFrame(0, 1485, 536, 495);

}
void AttackPlayerState::exit(Player& player)
{
}