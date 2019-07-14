/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_sdlenv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 19:57:04 by obelouch          #+#    #+#             */
/*   Updated: 2019/06/14 20:11:27 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libsdl.h"

void			init_sdlenv(t_sdlenv *env, int img, int ttf, int mixer)
{
	env->img = (img) ? 1 : 0;
	env->ttf = (ttf) ? 1 : 0;
	env->mixer = (mixer) ? 1 : 0;
	env->window = NULL;
	env->render = NULL;
	env->music = NULL;
}
