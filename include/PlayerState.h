#ifndef PLAYER_STATE_H
#define PLAYER_STATE_H
#include <SDL.h>
//#include "../include/Events.h"

class Player;

class PlayerState {
public:
	virtual ~PlayerState() {};
	virtual PlayerState* handleInput(SDL_Event* event) = 0;
	virtual void update(Player&) = 0;
	virtual void enter(Player&) = 0;
	virtual void exit(Player&) = 0;
	virtual bool repeat() = 0;
	virtual bool onLadder() = 0;
};

#endif