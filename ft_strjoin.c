#include "libft.h"
#include <stdlib.h>
int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}
char *ft_strjoin(char const *s1, char const *s2)
{
    char *news;
    size_t preslen;
    size_t sufslen;
    size_t i;
    size_t j;

    preslen = ft_strlen(s1);
    sufslen = ft_strlen(s2);
    news = (char *)malloc(preslen + sufslen + 1);
    i = 0;
    j = 0;
    if (!news)
        return (NULL);
    while (s1[i] != '\0')
    {
        news[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        news[i] = s2[j];
        j++;
        i++;
    }

    news[i] = '\0'; 
    return(news);
}
int main(void)
{
    char *s1 = "str1";
    char *s2 = "str2";
    printf("%s", ft_strjoin(s1,s2));
    return (0);
}