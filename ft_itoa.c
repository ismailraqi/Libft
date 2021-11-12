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

    dc = digitcounter(n);
    digits = ft_digitsgeter(n, dc);
    if (n < 0)
        dc += 1;
    res = (char *)malloc(sizeof(char)*dc + 1);
    if (res == NULL)
        return NULL;
    
    
}
    
int main(void)
{
    int i = 0;
    int *res = ft_digitsgeter(221155546,9);
    while (i < 9)
    {
        printf("%d\n" ,res[i]);
        i++;
    }
    return 0;
}