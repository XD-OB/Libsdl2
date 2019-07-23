#include "libsdl.h"

int		main(void)
{
	t_sdlenv	env;
	SDL_Color	color;
	SDL_Color	colors[2];
		SDL_Event	event;

	init_sdlenv(&env, 1, 1, 0);
	if (!init_sdl(env))
		return (EXIT_FAILURE);
	if (!fill_sdlenv(&env, "Obelouch", 1200, 800))
		return (EXIT_FAILURE);
	color = setcolor_sdl(0, 0, 0, 255);
	colors[0] = setcolor_sdl(255, 0, 0, 1);
	colors[1] = setcolor_sdl(0, 255, 0, 1);
	//drawcircle_sdl(env, color, ft_setpoint(200, 200), 100);
	//drawdisk_sdl(env, color, ft_setpoint(200, 200), 100);
	//drawline_sdl(env, color, ft_setpoint(300, 200), ft_setpoint(100, 200));
	//drawrect_sdl_b(env, color, create_rect(200, 300, 100, 100));
	drawfillsquare_sdl_c(env, colors, ft_setpoint(100, 100), 200);
	//drawquad_sdl(env, color, 5, ft_setpoint(100, 100), ft_setpoint(100, 200), ft_setpoint(200, 200), ft_setpoint(200, 100), ft_setpoint(50, 50));
	//drawboldquad_sdl(env, color, 10, 5, ft_setpoint(100, 100), ft_setpoint(100, 200), ft_setpoint(200, 200), ft_setpoint(200, 100), ft_setpoint(50, 50));
	//drawboldrect_sdl(env, color, ft_setboldline(ft_setpoint(100, 100), ft_setpoint(300, 300), 10));
	SDL_RenderPresent(env.render);
	int	pass = 1;
		while (pass)
		{
			while (SDL_PollEvent(&event))
				if (event.type == SDL_QUIT)
					pass = 0;
		}
	free_sdl(&env);
	return (0);
}
