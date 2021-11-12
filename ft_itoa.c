#include "libft.h"
#include <stdlib.h>
size_t ft_digitcounter(int n)
{
    size_t i;

    i = 0;
    while (n != 0)
    {
        n /= 10;    
        i++;
    }
    return i;
}
int *ft_revtab(int *src, size_t size)
{
    int *tab;
    size_t i;

    i = 0;
    tab = (int *)malloc(sizeof(int)*size);
    if (tab == NULL)
        return NULL;
    while (i < size)
    {
        tab[i] = src[size - 1 - i];
        i++;
    }
    return tab;
}
int *ft_digitsgeter(int n, size_t size)
{
    int *res;
    size_t i;

    if (n < 0)
        n = -n;

    res = (int *)malloc(sizeof(int)*size);
    if (res == NULL)
        return NULL;
    i = 0;
    while (i < size)
    {
        res[i] = n % 10;
        n /= 10;
        i++;
    }
    res = ft_revtab(res,size);
    return res;
}
char *ft_itoa(int n)
{
    size_t dc;
    char *res;
    int *digits;
    int flag;
    size_t i;

    i = -1;
    if (n < 0)
        flag = 1;
    dc = ft_digitcounter(n);
    digits = ft_digitsgeter(n, dc);
    i = 0;
    if (n < 0)
        dc += 1;
    res = (char *)malloc(sizeof(char)*dc + 1);
    if(flag)
    {
        res[i] = '-';
        i++;
        while (i < dc)
        {
            res[i] = digits[i-1] + '0';
            i++;
        }
    }
    else
    {
        while (i < dc)
        {
            res[i] = digits[i] + '0';
            i++;
        }
    }
    res[i] = '\0';
    return res;
}   

    
int main(void)
{
    char *res = ft_itoa(-51512);
    printf("%s",res);
    return 0;
}