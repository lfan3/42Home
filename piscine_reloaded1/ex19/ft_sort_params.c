#include<unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while(*str)
    {
        ft_putchar(*str);
        str++;
    }
}

char    **ft_ordre_croissant(char **av, int size)
{
    int i;
    int j;
    char *m;
    int k;
    
    i = 0;
    j = 0;
    while (i < size)
    {
        i++;
        k = i + 1;
        while (k < size)
        {
            while(av[i][j] == av[k][j])
            {
                j++;
            }
            if(av[i][j] - av[k][j] > 0)
            {
                m = av[i];
                av[i] = av[k];
                av[k] = m;
            }
        j = 0;
        k++;
        }
    }
    return(av);
}

int main(int ac, char **av)
{
    int i;
    char **table;
    
    i = 1;
    while(i < ac)
    {
         table = ft_ordre_croissant(av, ac);
         ft_putstr(table[i]);
         ft_putchar('\n');
         i++;
    }
    
   return(0);
}
