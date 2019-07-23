#include "libsdl.h"

void			drawsquare_sdl(t_sdlenv env, SDL_Color color, t_point a, int l)
{
	t_point		p[3];

	p[0] = ft_setpoint(a.y, a.x + l);
	p[1] = ft_setpoint(a.y + l, a.x + l);
	p[2] = ft_setpoint(a.y + l, a.x);
	drawline_sdl(env, color, a, p[0]);
	drawline_sdl(env, color, p[0], p[1]);
	drawline_sdl(env, color, p[1], p[2]);
	drawline_sdl(env, color, p[2], a);
}
