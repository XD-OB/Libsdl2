#include "libsdl.h"

/*
**	color[0]: border		color[1]: inside
*/

void			drawfillsquare_sdl_c(t_sdlenv env, SDL_Color color[2], t_point a, int l)
{
	t_point		p[4];
	SDL_Rect	rect;
	int			r;

	r = l / 2;
	p[0] = ft_setpoint(a.y - r, a.x - r);
	p[1] = ft_setpoint(a.y - r, a.x + r);
	p[2] = ft_setpoint(a.y + r, a.x + r);
	p[3] = ft_setpoint(a.y + r, a.x - r);
	rect = create_rect(l, l, p[0].y, p[0].x);
	SDL_SetRenderDrawColor(env.render, color[1].r, color[1].g, color[1].b, color[1].a);
	SDL_RenderFillRect(env.render, &rect);
	drawline_sdl(env, color[0], p[0], p[1]);
	drawline_sdl(env, color[0], p[1], p[2]);
	drawline_sdl(env, color[0], p[2], p[3]);
	drawline_sdl(env, color[0], p[3], p[0]);
}
