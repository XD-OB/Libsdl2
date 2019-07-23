#include "libsdl.h"

void                drawboldrect_sdl(t_sdlenv env, SDL_Color color, t_bline info)
{
	t_bline			bline;
	t_point			a;
	t_point			b;

	a = ft_setpoint(info.pi.y, info.pf.x);
	b = ft_setpoint(info.pf.y, info.pi.x);
	bline = ft_setboldline(info.pi, a, info.bold);
	drawboldline_sdl(env, color, bline);
	bline = ft_setboldline(a, info.pf, info.bold);
	drawboldline_sdl(env, color, bline);
	bline = ft_setboldline(info.pf, b, info.bold);
	drawboldline_sdl(env, color, bline);
	bline = ft_setboldline(b, info.pi, info.bold);
	drawboldline_sdl(env, color, bline);
}
