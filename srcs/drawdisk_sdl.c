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

void	drawdisk_sdl(t_sdlenv env, SDL_Color color, t_point c, int r)
{
	int	tmp_r;
	int	i;

	i = 0;
	tmp_r = r;
	while (tmp_r >= 0)
	{
		drawcircle_sdl(env, color, c, tmp_r);
		i++;
		tmp_r--;
	}
}
