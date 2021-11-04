
#include "../include/ThrowAttackPlayerState.h"

/*
#include <RunRightPlayerState.h>
#include <IdlePlayerState.h>
#include <DiedPlayerState.h>
*/

PlayerState* ThrowAttackPlayerState::handleInput(SDL_Event* input)
{
	/*
	if (input.getCurrent() == gpp::Events::Event::RUN_RIGHT_START_EVENT)
	{
		DEBUG_MSG("AttackPlayerState -> RunRightPlayerState");
		return new RunRightPlayerState();
	}
	else if (input.getCurrent() == gpp::Events::Event::THROW_STOP_EVENT)
	{
		DEBUG_MSG("AttackPlayerState -> IdlePlayerState");
		return new IdlePlayerState();
	}
	else if (input.getCurrent() == gpp::Events::Event::DIED_EVENT) {
		DEBUG_MSG("ThrowAttackPlayerState -> DiedPlayerState");
		return new DiedPlayerState();
	}
	*/
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

void ThrowAttackPlayerState::update(Player& player) {}
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