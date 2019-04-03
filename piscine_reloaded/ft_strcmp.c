#include <stdio.h>
int     ft_strcmp(char *s1, char *s2)
{
    int i;
   
    i = 0;
    while(s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
    {
        i++;
    }
    return(s1[i] - s2[i]);
}

int main()
{
    char *str1 = "abc";
    char *str2 = "ABCd";
    int ret = ft_strcmp(str1, str2);
    printf("%d", ret);
}
