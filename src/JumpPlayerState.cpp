#include "../include/Events.h"

#include "../include/JumpPlayerState.h"
#include "../include/JumpAttackPlayerState.h"

//#include "../include/DiedPlayerState.h"
//#include "../include/JumpThrowAttackPlayerState.h"
//#include "../include/GlidePlayerState.h"

PlayerState* JumpPlayerState::handleInput(SDL_Event* input)
{
	if (input->key.keysym.sym == SDLK_SPACE)
	{
		 	return new JumpAttackPlayerState();
	}
	return nullptr;
}

void JumpPlayerState::update(Player& player) 
{
	
	/*if (m_clock.getElapsedTime().asSeconds() > 1.2f) {
		PlayerState* temp = player.getPlayerState();
		PlayerState* state = new GlidePlayerState();
		player.getPlayerState()->exit(player);
		player.setPlayerState(state);
		player.getPlayerState()->enter(player);
		delete temp;
	}*/
}

bool JumpPlayerState::onLadder()
{
	return m_onLadder;
}

bool JumpPlayerState::repeat()
{
	return m_repeat;
}

void JumpPlayerState::enter(Player& player)
{
	player.getAnimatedSprite().clearFrames();

	//player.getAnimatedSprite().setPlayed(false);
	//player.getAnimatedSprite().setLooped(false);

	player.getAnimatedSprite().addFrame(3900, 1756, 362, 483);
	player.getAnimatedSprite().addFrame(4262, 1756, 362, 483);
	player.getAnimatedSprite().addFrame(4624, 1756, 362, 483);
	player.getAnimatedSprite().addFrame(3900, 2239, 362, 483);
	player.getAnimatedSprite().addFrame(4262, 2239, 362, 483);
	player.getAnimatedSprite().addFrame(4624, 2239, 362, 483);
	player.getAnimatedSprite().addFrame(3900, 2722, 362, 483);
	player.getAnimatedSprite().addFrame(4262, 2722, 362, 483);
	player.getAnimatedSprite().addFrame(4624, 2722, 362, 483);
	player.getAnimatedSprite().addFrame(3900, 3205, 362, 483);

}

void JumpPlayerState::exit(Player& player)
{

}