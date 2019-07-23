#include "libsdl.h"

void                drawrect_sdl(t_sdlenv env, SDL_Color color, t_point a, t_point b)
{
	t_point			ab;
	t_point			ba;

	ab = ft_setpoint(a.y, b.x);
	ba = ft_setpoint(b.y, a.x);
	drawline_sdl(env, color, a, ab);
	drawline_sdl(env, color, ab, b);
	drawline_sdl(env, color, b, ba);
	drawline_sdl(env, color, ba, a);
}
