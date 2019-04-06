#include <stdio.h>

void	ft_putchar(char c);

typedef	void (*ftptr)(char);

int		main()
{
	//void (*f)(char);
	ftptr		f;
	f = &ft_putchar;
	f('!');

	return (0);
}


