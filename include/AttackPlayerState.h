#ifndef ATTACK_PLAYER_STATE_H
#define ATTACK_PLAYER_STATE_H

#include "../include/Player.h"
#include "../include/PlayerState.h"

class AttackPlayerState : public PlayerState {
public:
	virtual PlayerState* handleInput(SDL_Event* input);
	virtual void update(Player&);
	virtual void enter(Player&);
	virtual void exit(Player&);
	virtual bool repeat();
	virtual bool onLadder();


private:

	bool m_repeat{false};
	bool m_onLadder{false};

};

#endif