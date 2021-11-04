#include "../include/Events.h"

#include "../include/RunRightPlayerState.h"
#include "../include/AttackPlayerState.h"
#include "../include/IdlePlayerState.h"

/*
#include "../include/ThrowAttackPlayerState.h"
#include "../include/AccendLadderPlayerState.h"
#include "../include/DecendLadderPlayerState.h"
#include "../include/JumpPlayerState.h"
#include "../include/DiedPlayerState.h"
#include "../include/SlidePlayerState.h"
*/

PlayerState* RunRightPlayerState::handleInput(SDL_Event* input)
{

	/*
	if (input.getCurrent() == gpp::Events::Event::ATTACK_START_EVENT)
	{
		DEBUG_MSG("RunRightPlayerState -> AttackPlayerState");
		return new AttackPlayerState();
	}
	if (input.getCurrent() == gpp::Events::Event::THROW_START_EVENT)
	{
		DEBUG_MSG("RunRightPlayerState -> ThrowAttackPlayerState");
		return new ThrowAttackPlayerState();
	}
	else if (input.getCurrent() == gpp::Events::Event::HIT_WALL_EVENT || input.getCurrent() == gpp::Events::Event::RUN_RIGHT_STOP_EVENT)
	{
		DEBUG_MSG("RunRightPlayerState -> IdlePlayerState");
		return new IdlePlayerState();
	}
	else if (input.getCurrent() == gpp::Events::Event::HIT_LADDER_BOTTOM_EVENT)
	{
		DEBUG_MSG("RunRightPlayerState -> AccendLadderPlayerState");
		return new AccendLadderPlayerState();
	}
	else if (input.getCurrent() == gpp::Events::Event::HIT_LADDER_TOP_EVENT)
	{
		DEBUG_MSG("RunRightPlayerState -> DecendLadderPlayerState");
		return new DecendLadderPlayerState();
	}
	else if (input.getCurrent() == gpp::Events::Event::JUMP_UP_EVENT) {
		DEBUG_MSG("IdlePlayerState -> JumpPlayerState");
		return new JumpPlayerState();
	}
	else if (input.getCurrent() == gpp::Events::Event::SLIDE_EVENT) {
		DEBUG_MSG("RunRightPlayerState -> SlidePlayerState");
		return new SlidePlayerState();
	}
	else if (input.getCurrent() == gpp::Events::Event::DIED_EVENT) {
		DEBUG_MSG("RunRightPlayerState -> DiedPlayerState");
		return new DiedPlayerState();
	}*/
	return nullptr;
}

bool RunRightPlayerState::repeat()
{
	return m_repeat;
}

bool RunRightPlayerState::onLadder()
{
	return m_onLadder;
}

void RunRightPlayerState::update(Player& player) {}
void RunRightPlayerState::enter(Player& player)
{
	player.getAnimatedSprite().clearFrames();

	player.getAnimatedSprite().addFrame(4986, 3556, 363, 458);
	player.getAnimatedSprite().addFrame(5349, 3556, 363, 458);
	player.getAnimatedSprite().addFrame(5712, 3556, 363, 458);
	player.getAnimatedSprite().addFrame(4986, 4014, 363, 458);
	player.getAnimatedSprite().addFrame(5349, 4014, 363, 458);
	player.getAnimatedSprite().addFrame(5712, 4014, 363, 458);
	player.getAnimatedSprite().addFrame(4986, 4472, 363, 458);
	player.getAnimatedSprite().addFrame(5349, 4472, 363, 458);
	player.getAnimatedSprite().addFrame(5712, 4472, 363, 458);
	player.getAnimatedSprite().addFrame(4986, 4930, 363, 458);

}
void RunRightPlayerState::exit(Player& player) 
{
	
}