/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_sdl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 20:19:48 by obelouch          #+#    #+#             */
/*   Updated: 2019/06/14 20:27:09 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libsdl.h"

void		free_sdl(t_sdlenv *env)
{
	if (env->music)
		Mix_FreeMusic(env->music);
	if (env->mixer)
		Mix_CloseAudio();
	if (env->ttf)
		TTF_Quit();
	if (env->img)
		IMG_Quit();
	SDL_DestroyRenderer(env->render);
	SDL_DestroyWindow(env->window);
	SDL_Quit();
}
