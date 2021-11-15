/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:53:49 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/15 04:22:34 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_wordcount(char *src, char del)
{
    size_t i;
    int wc;
    size_t slen;
    
    i = 0;
    wc = 0;
    slen = ft_strlen(src);
    if (slen == 0)
        return (wc + 1);
    if (src[i] != del && slen > 0)
        wc = 1;
    while (i < slen)
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
    if (!s || c == '\0')
        return (NULL);
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
    size_t len;
    
    len = ft_strlen(s);
    i = 0;
    u = 0;
    j = 0;
    while (i < len)
    {      
        while (s[j] == c && j < len)
            j++;
        x = j;
        while (s[j] != c && j < len)
            j++;
        y = j - 1;
        if (x > y)
        {
            res[u] = NULL;
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
        u++;
    }
    return (res);
}
 int main(void)
 {
    char *s = "\0aa\0bbb";
	char **result = ft_split(s, '\0');

    printf("%s\n", result[0]);
    return 0;
}

