/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawcircle_sdl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 16:05:19 by obelouch          #+#    #+#             */
/*   Updated: 2019/06/15 16:20:35 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

static void		eight_coins(SDL_Renderer *render, t_point c, t_point p)
{
	SDL_RenderDrawPoint(render, c.x + p.x, c.y + p.y);
	SDL_RenderDrawPoint(render, c.x - p.x, c.y + p.y);
	SDL_RenderDrawPoint(render, c.x + p.x, c.y - p.y);
	SDL_RenderDrawPoint(render, c.x - p.x, c.y - p.y);
	SDL_RenderDrawPoint(render, c.x + p.y, c.y + p.x);
	SDL_RenderDrawPoint(render, c.x - p.y, c.y + p.x);
	SDL_RenderDrawPoint(render, c.x + p.y, c.y - p.x);
	SDL_RenderDrawPoint(render, c.x - p.y, c.y - p.x);
}

void			drawcircle_sdl(t_sdlenv env, SDL_Color color, t_point c, int r)
{
	int			d;
	t_point		p;

	p.x = 0;
	p.y = r;
	d = 3 - 2 * r;
	SDL_SetRenderDrawColor(env.render, color.r, color.g, color.b, color.a);
	eight_coins(env.render, c, p);
	while (p.y >= p.x)
	{
		p.x++;
		if (d > 0)
		{
			p.y--;
			d += 4 * (p.x - p.y) + 10;
		}
		else
			d += 4 * p.x + 6;
		eight_coins(env.render, c, p);
	}
}
