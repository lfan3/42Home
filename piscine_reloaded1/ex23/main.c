#include "ft_point.h"
#include <stdio.h>
void 	*set_point(t_point *point)
{
	point->x =42;
	point->y =21;
	return (point);	
}

int	main()
{
	t_point	point;
	set_point(&point);
	printf("%d", point.x);
}