#include "libft.h"
#include <stdlib.h>
void *calloc(size_t count, size_t size)
{
    void *res;

    res = malloc(count*size);
    if (!res)
        return (NULL);
    ft_bzero(res,count*size);
    return (res);
}