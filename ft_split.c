#include "libft.h"
#include <stdlib.h>
int ft_wordcount(char *src, char del)
{
    size_t i;
    size_t wc;

    i = 0;
    wc = 0;
    if (src[i] != del && src[i] != '\0')
        wc = 1;
    while (src[i] != '\0')
    {
        if (src[i] != del && src[i - 1] == del)
            wc++;
        i++;
    }
    return (wc);
}

char **ft_split(char const *s, char c)
{
    char **res;
    size_t wc;

    wc = ft_wordcount((char *)s,c);
    res = malloc(sizeof(char*)*wc);
    if(res == NULL)
        return (NULL);

    size_t i;
    size_t j;
    size_t x;
    size_t y;
    size_t t;
    size_t u;

    
    i = 0;
    u = 0;
    j = 0;
    while (s[i] != '\0')
    {      
        while (s[j] == c && s[j] != '\0')
            j++;
        x = j;
        while (s[j] != c && s[j] != '\0')
            j++;
        y = j - 1;
        if (x > y)
        {
            res[u] = "\0";
            break;
        }
        res[u] = malloc(sizeof(char)*(y - x)+2);
        if(res[u] == NULL)
            return (NULL);
        t = 0;
        while (t <= (y - x))
        {
            res[u][t] = (char )s[(x) + t];
            t++;
        }
        res[u][t] = '\0'; 
        i = j;
        printf("%s\n", res[u]);
        u++;
    }
    return (res);
}

int main (void)
{
    char *src = "12313 212 1221 112 ";
    char c = ' ';
    ft_split(src,c);
    return (0);
}
