#include "libsdl.h"

int		main(void)
{
	t_sdlenv	env;
	SDL_Color	color;
		SDL_Event	event;

	init_sdlenv(&env, 1, 1, 1);
	if (!init_sdl(env))
		return (EXIT_FAILURE);
	if (!fill_sdlenv(&env, "Obelouch", 1200, 800))
		return (EXIT_FAILURE);
	color = setcolor_sdl(0, 0, 0, 255);
	//drawcircle_sdl(env, color, ft_setpoint(200, 200), 100);
	//drawline_sdl(env, color, ft_setpoint(100, 200), ft_setpoint(300, 200));
	drawboldline_sdl(env, color, ft_setboldline(ft_setpoint(100, 200), ft_setpoint(300, 200), 10));
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
