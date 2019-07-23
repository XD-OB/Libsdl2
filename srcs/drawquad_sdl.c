#include "libsdl.h"

void			drawquad_sdl(t_sdlenv env, SDL_Color color, int n_points, ...)
{
	va_list		args;
	t_point		*p;
	int			i;

	if (n_points > 1)
	{
		i = 0;
		if (!(p = (t_point*)malloc(sizeof(t_point) * n_points)))
			return ;
		va_start(args, n_points);
		while (i < n_points)
			p[i++] = va_arg(args, t_point);
		i = 0;
		while (++i < n_points)
			drawline_sdl(env, color, p[i - 1], p[i]);
		drawline_sdl(env, color, p[0], p[n_points - 1]);
		va_end(args);
		free(p);
	}
}
