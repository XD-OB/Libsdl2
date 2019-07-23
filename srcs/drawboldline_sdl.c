/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawboldline_sdl.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 03:01:56 by obelouch          #+#    #+#             */
/*   Updated: 2019/07/03 03:54:32 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

static void		boldline_delta_y(t_sdlenv env, SDL_Color color, t_bline boldline)
{
	t_point		pi_tmp;
	t_point		pf_tmp;
	int			minus;
	int			i;

	i = 0;
	minus = boldline.bold / 2 - 1;
	pi_tmp = ft_setpoint(boldline.pi.y, boldline.pi.x - minus);
	pf_tmp = ft_setpoint(boldline.pf.y, boldline.pf.x - minus);
	while (i < boldline.bold)
	{
		drawline_sdl(env, color, pi_tmp, pf_tmp);
		pi_tmp.x++;
		pf_tmp.x++;
		i++;
	}
}

static void		boldline_delta_x(t_sdlenv env, SDL_Color color, t_bline boldline)
{
	t_point		pi_tmp;
	t_point		pf_tmp;
	int			minus;
	int			i;

	i = 0;
	minus = boldline.bold / 2 - 1;
	pi_tmp = ft_setpoint(boldline.pi.y - minus, boldline.pi.x);
	pf_tmp = ft_setpoint(boldline.pf.y - minus, boldline.pf.x);
	while (i < boldline.bold)
	{
		drawline_sdl(env, color, pi_tmp, pf_tmp);
		pi_tmp.y++;
		pf_tmp.y++;
		i++;
	}
}

void			drawboldline_sdl(t_sdlenv env, SDL_Color color, t_bline boldline)
{
	t_point		delta;

	if (boldline.pi.x > boldline.pf.x)
		swap_pt(&(boldline.pi), &(boldline.pf));
	else if (boldline.pi.y > boldline.pf.y)
		swap_pt(&(boldline.pi), &(boldline.pf));
	delta.x = boldline.pf.x - boldline.pi.x;
	delta.y = boldline.pf.y - boldline.pi.y;
	if (delta.x > delta.y)
		boldline_delta_x(env, color, boldline);
	else
		boldline_delta_y(env, color, boldline);
}
