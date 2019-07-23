#include "libsdl.h"

t_point			pt_linterp(t_point p1, t_point p2, int a, int t)
{
	t_point		p;

	p.x = ((float)((p2.x - p1.x) * a) / t) + p1.x;
	p.y = ((float)((p2.y - p1.y) * a) / t) + p1.y;
	return (p);
}
