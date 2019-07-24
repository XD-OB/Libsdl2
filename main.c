#include "libsdl.h"

int		main(void)
{
	t_sdlenv	env;
	SDL_Color	color;
	SDL_Color	colors[2];
		SDL_Event	event;

	sdlenv_init(&env, 1, 1, 0);
	if (!sdl_init(env))
		return (EXIT_FAILURE);
	if (!sdlenv_fill(&env, "Obelouch", 1200, 800))
		return (EXIT_FAILURE);
	color = sdl_rgb(0, 0, 0);
	colors[0] = sdl_rgb(255, 0, 0);
	colors[1] = sdl_rgb(0, 255, 0);
	sdl_circle(env, color, pt_new(200, 200), 100);
	//drawdisk_sdl(env, color, ft_setpoint(200, 200), 100);
	//drawline_sdl(env, color, ft_setpoint(300, 200), ft_setpoint(100, 200));
	//drawrect_sdl_b(env, color, create_rect(200, 300, 100, 100));
	//drawfillsquare_sdl_c(env, colors, ft_setpoint(100, 100), 200);
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
	sdl_close(&env);
	return (0);
}
