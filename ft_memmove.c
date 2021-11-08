#include "libft.h"
#include <stdio.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *fsrc ;
    char *fdest ;
    
    fdest = (char *)dest;
    fsrc = (char *)src;
    if ((fsrc == NULL) &&(fdest == NULL))
        return NULL;
    if ((fsrc < fdest) && (fdest < fsrc + n))
    {
        while (n--)
            fdest[n] = fsrc[n];
    }
    else
    {
        while(n--)
            *fdest++ = *fsrc++;
    }
    return dest;
}