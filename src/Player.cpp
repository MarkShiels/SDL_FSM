#include <stdio.h>
#include "../include/Player.h"
#include "../include/Events.h"
#include "../include/IdlePlayerState.h"
#include "../include/AccendLadderPlayerState.h"
#include "../include/DecendLadderPlayerState.h"

Player::Player()
{
	m_state = new IdlePlayerState();
	m_state->enter(*this);
	m_currentFrame = 0;
	m_currentTime = 0;
	m_alive = true;
}

Player::Player(AnimatedSprite& sprite) : m_animatedSprite(sprite)
{
	// Set the Player to Default to IdlePlayer State 
	// and Enter that State
	m_state = new IdlePlayerState();
	m_state->enter(*this);
}

void Player::handleInput(SDL_Event* input) 
{
	PlayerState * state = m_state->handleInput(input);

	if (state != NULL) 
	{
		m_state->exit(*this);
		delete m_state;
		m_state = state;
		m_state->enter(*this);
		m_currentFrame = 0;
	}
}

void Player::returnToIdle()
{
	delete m_state;
	m_state = new IdlePlayerState();
	m_state->enter(*this);
}

void Player::returnToLadder()
{
	delete m_state;
	m_state = new DecendLadderPlayerState();
	m_state->enter(*this);
}

int Player::getCurrentFrame()
{
	return m_currentFrame;
}

void Player::incFrame()
{
	++m_currentFrame;
}

void Player::resetFrame()
{
	m_currentFrame = 0;
}

bool Player::checkTime()
{
	if(SDL_GetTicks() > m_currentTime + m_frameDelay)
	{
		m_currentTime = SDL_GetTicks();
		return true;
	}
	else
	{
		return false;
	}
}

void Player::update(int t_time) 
{
	m_animatedSprite.update();
	m_state->update(*this);
	
/*
	if(SDL_GetTicks() > m_currentTime + m_frameDelay)
    {   
		++m_currentFrame;

        if( m_currentFrame >= m_animatedSprite.getFrames()->size() )
        {
			if(m_alive)
           	{	
				m_currentFrame = 0;
				if(!getPlayerState()->repeat() && !getPlayerState()->onLadder())
				{	
					returnToIdle();
				}
				else if(!getPlayerState()->repeat() && getPlayerState()->onLadder())
				{		
					returnToLadder();
				}
			}
			else
			{
				m_currentFrame = m_animatedSprite.getFrames()->size() - 1;
			}
        }

        m_currentTime = SDL_GetTicks();
    }
*/
}

AnimatedSprite& Player::getAnimatedSprite() 
{
	return m_animatedSprite;
}

bool Player::getAlive()
{
	return m_alive;
}

void Player::setAlive(bool t_bool)
{
	m_alive = t_bool;
}

AnimatedSprite& Player::getAnimatedSpriteFrame() 
{
	int frame = m_animatedSprite.getCurrentFrame();
	m_animatedSprite.setTextureRect(m_animatedSprite.getFrame(frame));
	return m_animatedSprite;	
}

void Player::setAnimatedSprite(AnimatedSprite& t_animatedSprite) 
{
	m_animatedSprite = t_animatedSprite;
}

PlayerState* Player::getPlayerState() 
{ 
	return m_state; 
}

void Player::setPlayerState(PlayerState* state) 
{ m_state = state; }