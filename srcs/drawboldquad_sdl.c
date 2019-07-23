#include "libsdl.h"

void			drawboldquad_sdl(t_sdlenv env, SDL_Color color, int bold, int n_points, ...)
{
	va_list		args;
	t_bline		bline;
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
		{
			if (p[i].x - p[i - 1].x != 0)
				p[i].x += bold / 2;
			if (p[i].y - p[i - 1].y != 0)
				p[i].y += bold / 2;
			bline = ft_setboldline(p[i], p[i - 1], bold);
			drawboldline_sdl(env, color, bline);
			if (p[i].x - p[i - 1].x != 0)
				p[i].x -= bold / 2;
			if (p[i].y - p[i - 1].y != 0)
				p[i].y -= bold / 2;
		}
		bline = ft_setboldline(p[n_points - 1], p[0], bold);
		drawboldline_sdl(env, color, bline);
		va_end(args);
		free(p);
	}
}
