#include "libsdl.h"

void                drawrect_sdl_c(t_sdlenv env, SDL_Color color, SDL_Rect rect)
{
	t_point			p[4];

	p[0] = ft_setpoint(rect.y - (rect.h / 2), rect.x - (rect.w / 2));
	p[1] = ft_setpoint(rect.y - (rect.h / 2), rect.x + (rect.w / 2));
	p[2] = ft_setpoint(rect.y + (rect.h / 2), rect.x + (rect.w / 2));
	p[3] = ft_setpoint(rect.y + (rect.h / 2), rect.x - (rect.w / 2));
	drawline_sdl(env, color, p[0], p[1]);
	drawline_sdl(env, color, p[1], p[2]);
	drawline_sdl(env, color, p[2], p[3]);
	drawline_sdl(env, color, p[3], p[0]);
}
