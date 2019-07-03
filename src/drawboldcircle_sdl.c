/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawboldcircle_sdl.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 16:05:19 by obelouch          #+#    #+#             */
/*   Updated: 2019/06/15 16:20:35 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

void			drawboldcircle_sdl(t_sdlenv env, SDL_Color color, t_bcircle b_circle)
{
	int	bold;
	int	r;
	int	i;

	i = 0;
	bold = b_circle.bold;
	r = b_circle.r - bold;
	while (i < bold)
	{
		drawcircle_sdl(env, color, b_circle.c, r);
		r++;
		i++;
	}
}
