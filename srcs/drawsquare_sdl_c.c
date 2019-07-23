#include "libsdl.h"

void			drawsquare_sdl_c(t_sdlenv env, SDL_Color color, t_point c, int l)
{
	t_point		p[4];
	int			r;

	r = l / 2;
	p[0] = ft_setpoint(c.y - r, c.x - r);
	p[1] = ft_setpoint(c.y - r, c.x + r);
	p[2] = ft_setpoint(c.y + r, c.x + r);
	p[3] = ft_setpoint(c.y + r, c.x - r);
	drawline_sdl(env, color, p[0], p[1]);
	drawline_sdl(env, color, p[1], p[2]);
	drawline_sdl(env, color, p[2], p[3]);
	drawline_sdl(env, color, p[3], p[0]);
}
