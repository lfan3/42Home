#include <stdio.h>
#include "includes/ft_header.h"
int		main()
{
	char str[20];
	char str2[20] = "Hello";
	int i;
	int j;
	int k1 = 1;
	int k2 = 2;

	ft_putchar('a');
	ft_putstr("hello");
	i = ft_strcmp(str, str2);
	j = ft_strlen(str);
	ft_swap(&k1, &k2);
	printf("%d + %d + %d + %d", i, j, k1, k2);
	return (0);
}
