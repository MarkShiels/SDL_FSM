#ifndef IDLE_PLAYER_STATE_H
#define IDLE_PLAYER_STATE_H

#include "../include/Player.h"
#include "../include/PlayerState.h"

class IdlePlayerState : public PlayerState{
public:
	virtual PlayerState* handleInput(SDL_Event* input);
	virtual void update(Player&);
	virtual void enter(Player&);
	virtual void exit(Player&);
	virtual  bool repeat();
	virtual bool onLadder();


private:

	bool m_repeat{true};
	bool m_onLadder{false};
};
#endif