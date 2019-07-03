/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setboldline.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 03:24:30 by obelouch          #+#    #+#             */
/*   Updated: 2019/07/03 03:31:06 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

t_boldline		ft_setboldline(t_point pi, t_point pf, int bold)
{
	t_boldline	boldline;

	boldline.pi = pi;
	boldline.pf = pf;
	boldline.bold = bold;
	return (boldline);
}
