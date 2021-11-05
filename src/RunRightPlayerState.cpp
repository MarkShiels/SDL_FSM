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

void RunRightPlayerState::update(Player& player) 
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