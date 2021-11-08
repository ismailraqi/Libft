#include "libft.h"

char *ft_strchr(const char *s, char c)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            return (s[i]);
        i++;
    }
    if (s[i] == '\0')
        return (s[i]);
    return (NULL);
}