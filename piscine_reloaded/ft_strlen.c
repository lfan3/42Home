#include <stdio.h>
int     ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(*str)
    {
        i++;
        str++;
    }
    return (i);
}

int main () {
    char str[50] = "This is tutorialspoint.com";
    int len = ft_strlen(str);
    printf("%d", len);
   
   return(0);
}
