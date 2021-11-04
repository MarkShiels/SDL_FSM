#ifndef ANIMATED_SPRITE_H
#define ANIMATED_SPRITE_H
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <vector>

class AnimatedSprite
{
public:
	
	AnimatedSprite();
	~AnimatedSprite();

	int 		getClock();
	int 		getTime();
	void 		clearFrames();
	SDL_Rect* 	getFrame(int n);
	void 		addFrame(int x, int y, int w, int h);
	int 		getCurrentFrame();
	void		setLooped(bool t_bool);
	bool		getLooped();
	void 		setPlayed(bool t_bool);
	bool 		getPlayed();
	void 		setTime(int t_time);
	void		setTextureRect(SDL_Rect* t_rect);
	void 		update();
	void 		setTexture(SDL_Texture* t_txtr);

	SDL_Texture* getTexture();
	SDL_Texture* m_texture;
	std::vector<int> frames;
	std::vector<SDL_Rect>* getFrames();


private:
	int 	m_time;
	int 	m_clock;
	int 	m_currentFrame;
	bool 	m_played;
	bool 	m_loop;
	int 	m_playCount = 0;
	int 	m_maxPlays = 0;

	std::vector<SDL_Rect> m_frames;
};


#endif // !ANIMATED_SPRITE_H
