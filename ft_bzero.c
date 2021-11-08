#include "libft.h"
void ft_bzero(void *s, size_t n)
{
    unsigned char *src;

    src = (unsigned char)s;
    while (n--)
        *(src++) = '\0';
}