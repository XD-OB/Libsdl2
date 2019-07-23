#include "libsdl.h"

/*
**	color[0]: border		color[1]: inside
*/

void			drawfillsquare_sdl(t_sdlenv env, SDL_Color color[2], t_point a, int l)
{
	t_point		p[3];
	SDL_Rect	rect;

	rect = create_rect(l, l, a.y, a.x);
	SDL_SetRenderDrawColor(env.render, color[1].r, color[1].g, color[1].b, color[1].a);
	SDL_RenderFillRect(env.render, &rect);
	p[0] = ft_setpoint(a.y, a.x + l);
	p[1] = ft_setpoint(a.y + l, a.x + l);
	p[2] = ft_setpoint(a.y + l, a.x);
	drawline_sdl(env, color[0], a, p[0]);
	drawline_sdl(env, color[0], p[0], p[1]);
	drawline_sdl(env, color[0], p[1], p[2]);
	drawline_sdl(env, color[0], p[2], a);
}
