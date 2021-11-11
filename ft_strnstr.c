#include "libft.h"
#include <stdio.h>
#include <string.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (needle[i] == '\0')
        return ((char *)haystack);
    while (haystack[i] != '\0' && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && i + j < len)
        {
            if(needle[j + 1] == '\0')
                return ((char *)haystack + i);
            j++;
        }
        i++;
    }
    return (NULL);
}
int main (void)
{
    printf("%s\n", ft_strnstr("ter te hello world", "ter te hello world",20));
    printf("%s\n", strnstr("ter te hello world", "ter te hello world",20));
    return(0);
}