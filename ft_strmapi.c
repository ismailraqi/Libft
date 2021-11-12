#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    size_t len;
    char *res;
    if(s == NULL || f == NULL)
        return NULL;
    len = ft_strlen(s);
    i = 0;
    res = (char *)malloc(sizeof(char)*len + 1);
    if(res == NULL)
        return NULL;
    while (s[i] != '\0')
    {   
        res[i] = f(i,s[i]);
        i++;
    }
    res[i] = '\0';
    return res;
}
