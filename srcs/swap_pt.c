#include "libsdl.h"

void			swap_pt(t_point *p1, t_point *p2)
{
	t_point		tmp;

	tmp = ft_setpoint(p1->y, p1->x);
	p1->y = p2->y;
	p1->x = p2->x;
	p2->y = tmp.y;
	p2->x = tmp.x;
}
