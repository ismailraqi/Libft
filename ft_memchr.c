#include "libft.h"
void *memchr(const void *s, int c, size_t n)
{
    unsigned char *src;
    unsigned char chr;
    size_t i;

    src = (unsigned char *)s;
    chr = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if (src[i] == chr)
            return (src + i);
        i++;
    }
    return (NULL);
}