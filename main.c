#include "libsdl.h"

int		main(void)
{
	t_sdlenv	env;

	init_sdlenv(&env, 1, 1, 1);
	if (!init_sdl(env))
		return (EXIT_FAILURE);
	if (!fill_sdlenv(&env, "Obelouch", 1200, 800))
		return (EXIT_FAILURE);
	free_sdl(&env);
	SDL_Delay(2000);
}
