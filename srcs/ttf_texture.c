#include "libsdl.h"

SDL_Texture		*ttf_texture(SDL_Renderer *render, TTF_Font *font, char *str, SDL_Color color)
{
	SDL_Surface	*surface;
	SDL_Texture	*text;

	surface = TTF_RenderText_Blended(font, str, color);
	text = SDL_CreateTextureFromSurface(render, surface);
	return (text);
}
