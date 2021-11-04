#ifndef CLIMB_DOWN_PLAYER_STATE_H
#define CLIMB_DOWN_PLAYER_STATE_H

#include "../include/Player.h"
#include "../include/PlayerState.h"

class ClimbDownPlayerState : public PlayerState {
public:
	virtual PlayerState* handleInput(SDL_Event* input);
	virtual void update(Player&);
	virtual void enter(Player&);
	virtual void exit(Player&);
	virtual bool repeat();
	virtual bool onLadder();

private:

	bool m_repeat{false};
	bool m_onLadder{true};
};

#endif