#include <stdio.h>
int     ft_sqrt(int nb)
{
    int i;
    
    i = 0;
    if (nb == 1)
        return (1);
    if(nb >2 && i <46341)
    {
        while (i * i != nb)
        {
            i++;
        }
        return (i);
    }
    else
        return (0);
}

int main()
{
    printf("%d", ft_sqrt(2147395600));
}
