#include "libft.h"
char *ft_strrchr(const char *s, char c)
{
    int size;
    char *res;

    res = (char *)s;
    size = ft_strlen(s);    
    while (size >= 0)
    {
        if (s[size] == c)
            return (res + size);
        size--;
    }
    return (NULL);
}
