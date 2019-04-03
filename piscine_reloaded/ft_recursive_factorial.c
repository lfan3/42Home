#include <stdio.h>
int ft_recursive_factorial(int nb)
{
    int result;
    result = nb;
    
    if(nb < 0 || nb > 13)
        return(0);
    if (nb ==0 || nb == 1)
        return(1);
    result = result * ft_recursive_factorial(nb - 1);
    
    return(result);
}

int main()
{
   int a = 0;
   printf("%d",ft_recursive_factorial(a));
}
