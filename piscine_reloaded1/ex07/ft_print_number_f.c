/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:08:50 by linfan            #+#    #+#             */
/*   Updated: 2019/04/02 16:14:18 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(void)
{
	char n;

	n = '1';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}	

int	main()
{
	ft_print_number();
	return (0);
}
