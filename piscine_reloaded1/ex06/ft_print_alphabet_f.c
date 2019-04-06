/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:36:22 by linfan            #+#    #+#             */
/*   Updated: 2019/04/02 15:51:24 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c, 1);
}

void	ft_print_alphabet(void)
{
	char a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}

int		main()
{
	ft_print_alphabet();
	return (0);
}
