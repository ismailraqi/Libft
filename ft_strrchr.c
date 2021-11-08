#include "libft.h"
char *ft_strrchr(char *s, char c)
{
    int size;

    size = ft_strlen(s);    
    while (size >= 0)
    {
        if (s[size] == c)
            return (s[size]);
        size--;
    }
    return (NULL);
}
