#include "libft.h"
void *ft_memset(void *ptr, int x, size_t n)
{
    unsigned    char    *src;
    size_t  size;
    int i;

    i = 0;
    size  = n;
    src = ptr;
    while (size--)
    {
        src[i] = (unsigned char)x;
        i++;
    }
    return (src);
}