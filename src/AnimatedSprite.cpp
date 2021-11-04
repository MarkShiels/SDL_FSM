#include "../include/AnimatedSprite.h"


AnimatedSprite::AnimatedSprite()
{
	m_currentFrame = 0;
	m_loop = true;
	m_playCount = 0;
	m_maxPlays = 0;
	m_played = false;

}

AnimatedSprite::~AnimatedSprite()
{
}

void AnimatedSprite::setTexture(SDL_Texture* t_txtr)
{
	m_texture = t_txtr;
}

SDL_Texture* AnimatedSprite::getTexture()
{
	return m_texture;
}

int AnimatedSprite::getClock() 
{
	return m_clock;
}

int AnimatedSprite::getTime() 
{
	return m_time;
}

std::vector<SDL_Rect>* AnimatedSprite::getFrames() 
{
	return &m_frames;
}

SDL_Rect* AnimatedSprite::getFrame(int t_frame)
{
	return &m_frames[t_frame];
}

void AnimatedSprite::setTextureRect(SDL_Rect* t_rect)
{

}

void AnimatedSprite::addFrame(int x, int y, int w, int h)
{
	SDL_Rect rect;
	rect.x = x;
	rect.y = y;
	rect.w = w;
	rect.h = h;

	m_frames.push_back(rect);
}

void AnimatedSprite::clearFrames() 
{
	m_currentFrame = 0;
	m_played = false;

	if (!m_frames.empty())
	{
		m_frames.clear();
	}
}

int AnimatedSprite::getCurrentFrame() 
{
	return m_currentFrame;
}


void AnimatedSprite::setLooped(bool t_bool) 
{
	m_loop = t_bool;
}

bool AnimatedSprite::getLooped() 
{
	return m_loop;
}

void AnimatedSprite::setPlayed(bool t_bool) 
{
	m_played = t_bool;
}

bool AnimatedSprite::getPlayed() 
{
	return m_played;
}

void AnimatedSprite::setTime(int t_time)
{
	m_time = t_time;
}

void AnimatedSprite::update()
{
	// If not looped only play once
	if (m_played == true && !m_loop)
	{
		m_currentFrame = m_frames.size() - 1;
	}
	else 
	{
		if (m_clock > m_time) 
		{
			if (m_frames.size() > m_currentFrame + 1)
			{
				m_currentFrame++;
			}
			else 
			{
				m_currentFrame = 0;
				m_played = true;
			}

			m_clock = 0;
		}
	}
}
/*

AnimatedSprite::AnimatedSprite(const sf::Texture& t) : AnimatedSprite(){
	this->setTexture(t);
}

AnimatedSprite::AnimatedSprite(const sf::Texture& t, const sf::IntRect& rect) : 
	AnimatedSprite(t)
{
	m_frames.push_back(rect);
}
*/



