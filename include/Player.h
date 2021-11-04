#ifndef PLAYER_H
#define PLAYER_H
#include "../include/Events.h"
#include "../include/PlayerState.h"
#include "../include/AnimatedSprite.h"

class Player
{

public:

	Player();
	Player(AnimatedSprite&);
	virtual void handleInput(SDL_Event* input);
	virtual void update(int t_time);
	AnimatedSprite& getAnimatedSprite();
	AnimatedSprite& getAnimatedSpriteFrame();
	void setAnimatedSprite(AnimatedSprite&);
	PlayerState* getPlayerState();
	void setPlayerState(PlayerState*);
	void returnToIdle();
	int  getCurrentFrame();
	void returnToLadder();

private:

	int m_currentFrame;
    int m_currentTime;
    int m_frameDelay{100};	
	PlayerState* m_state;
	AnimatedSprite m_animatedSprite;
};
#endif

