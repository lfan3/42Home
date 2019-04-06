/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 10:37:26 by linfan            #+#    #+#             */
/*   Updated: 2019/04/04 12:46:29 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
char	*ft_strdup(char *src)
{
   int	j;
   char *dest;
   int i;

   j = 0;
   i = 0;
   while(src[j])
   {
	   j++;
   }
   dest = (char*)malloc(sizeof(char) * (j + 1));
   if(dest == NULL)
   return (0);
   while(src[i])
   {
   dest[i] = src[i];
   i++;
   }
   dest[i] = '\0';	
   return (dest);
}
int	main()
{
	char *str = "HELLO";
	char *dest;

	dest = ft_strdup(str);

	printf("%s", dest);
	return (0);
}
