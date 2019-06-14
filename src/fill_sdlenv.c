/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_sdlenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 19:13:52 by obelouch          #+#    #+#             */
/*   Updated: 2019/06/14 20:09:43 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libsdl.h"

static int		error_sdlenv(t_sdlenv *env, int type)
{
	if (type == 0)
		ft_dprintf(2, "%{RED}Error will creating the Window: %{eoc}
				%s\n", SDL_GetError());
	else
	{
		ft_dprintf(2, "%{RED}Error will creating the Renderer: %{eoc}
				%s\n", SDL_GetError());
		SDL_DestroyWindow(env->window);
	}
	if (env->img)
		IMG_Quit();
	if (env->ttf)
		TTF_Quit();
	if (env->mixer)
		Mix_Quit();
	SDL_Quit();
}

int			fill_sdlenv(t_sdlenv *env, char *title, int height, int width)
{
	env->window = SDL_CreateWindow(
			title,
			SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
			width, height, 0);
	if (!env->window)
		return (error_sdlenv(env, 0));
	display->render = SDL_CreateRenderer(
			display->window, -1,
			SDL_RENDERER_ACCELERATED);
	if (!display->render)
		return (error_sdlenv(env, 1));
	return (1);
}
