#include "libft.h"
int memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *fSrc;
    unsigned char *sSrc;
    size_t i;

    fSrc = (unsigned char *)s1;
    sSrc = (unsigned char *)s2;
    i = 0;
    while (fSrc != NULL && sSrc != NULL && i < n)
    {
        if (fSrc[i] != sSrc[i])
            return (fSrc[i] - sSrc[i]);
        i++;
    }
    return (0);
}