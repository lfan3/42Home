#include <stdio.h>
int ft_iterative_factorial(int nb)
{
    int i;
   
    
    i = nb;
    if(nb < 0 || nb > 13)
        return(0);
    if (nb ==0 || nb == 1)
        return(1);
    while(i > 1)
    {
        nb *= (i -1);
        i--;
    }
    return(nb);
}

int main()
{
   int a = 12;
   printf("%d",ft_iterative_factorial(a));
}
