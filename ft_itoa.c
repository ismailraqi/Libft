#include <stdio.h>
#include <stdlib.h>
int ft_counter(unsigned int lon)
{
    int i;

    i = 0;
    if (lon == 0)
        return (1);
    while (lon != 0)
    {
        lon /= 10;    
        i++;
    }
    return i;
}

char *ft_itoa(int n)
{
    int flag;
    int i;
    unsigned int lon;
    char *res;
    int k;
    
    k = 0;
    flag = 0;
    lon = n;
    if (n <= -1)
    {
        flag = 1;
        lon = n * -1;
    }
    i = ft_counter(lon) + flag;
    if (n == 0)
      k = 1;
    res = malloc(sizeof(char) * (i + flag + k));
    if (!res)
        return (NULL);
    if (flag)
        res[0] = '-';
    res[i--] = '\0';
    while (i >= flag)
    {
        res[i--] = (lon % 10) + '0';
        lon /= 10;
    }
    return (res);
}