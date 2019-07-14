/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_rect.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 20:03:14 by obelouch          #+#    #+#             */
/*   Updated: 2019/06/14 20:03:38 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libsdl.h"

SDL_Rect			create_rect(int height, int width, int y, int x)
{
	SDL_Rect		rect;

	rect.h = height;
	rect.w = width;
	rect.y = y;
	rect.x = x;
	return (rect);
}
