/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setboldcircle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 03:24:30 by obelouch          #+#    #+#             */
/*   Updated: 2019/07/03 03:31:06 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

t_bcircle		ft_setboldcircle(t_point c, int r, int bold)
{
	t_bcircle	boldcircle;

	boldcircle.c = c;
	boldcircle.r = r;
	boldcircle.bold = bold;
	return (boldcircle);
}
