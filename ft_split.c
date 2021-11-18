/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:53:49 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/18 12:30:49 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int  w_counter(char const *src, char delimiter)
{
    int i;
    int wc;
    
    i = 0;
    wc = 0;
    if (!src || !delimiter)
        return (wc);
    if (src[i] != delimiter)
        wc++;
    while (src[i] != '\0')
    {
        if (src[i] != delimiter && src[i - 1] == delimiter)
            wc++;
        i++;
    }
    return (wc);
}

static  char **w_creator(const char *s, char delimiter, int wc)
{
    int i;
    int start;
    int end;
    int row;
    char **res;
        
    row = 0;
    i = 0;
    start = 0;
    end = 0;
    res = malloc(sizeof(char*)* (wc + 1));
    if (!res)
        return (NULL);
    while (s[i] != '\0')
    {
        while (s[i] == delimiter && s[i] != '\0')
            i++;
        start = i;
        while (s[i] != delimiter && s[i] != '\0')
            i++;
        end = i;
        if (start >= end)
           break;
        res[row] = ft_substr(s,start,(end - start));
        row++;
    }
    res[row] = NULL;
    return (res);
}

char    **ft_split(char const *s, char c)
{
    int wc;
    char **res;
        
    if (!s)
        return (NULL);
    wc = w_counter(s,c);
    res = w_creator(s,c, wc);
    return (res);
}
        // int main(void)
        // {
        //     int i = 0;
        //     char s[] = "tripouille";
        //     char **result = ft_split(s, ' ');
        //     while (i < 2)
        //         printf("%s", result[i++]);
        //     return 0;
        // }
// int main(void)
// {
//     int i = 0;
//     char *s = "              olol";
//     char **result = ft_split(s, ' ');
//     while (i < 2)
//         printf("%s", result[i++]);
//     return 0;
// }
// #include <string.h>

// char    *ft_copy(const char *s, int start, int len)
// {
//     char *t;
//     int i;
    
//     i = 0;
//     if (!s)
//         return (NULL);
//     t = malloc(len - start * sizeof(char) + 1);
//     while (start < len)
//         t[i++] = s[start++];
//     t[i] = 0;
//     return (t);
// }

// static  int  w_counter(char const *src, char delimiter)
// {
//     int i;
//     int wc;
    
//     i = 0;
//     wc = 0;
//     if (!src || !delimiter)
//         return (wc);
//     if (src[i] != delimiter)
//         wc++;
//     while (src[i] != '\0')
//     {
//         if (src[i] != delimiter && src[i - 1] == delimiter)
//             wc++;
//         i++;
//     }
//     return (wc);
// }

// static  char **w_creator(const char *s, char delimiter, int wc)
// {
//     int i;
//     int start;
//     int end;
//     int row;
//     char **res;
        
//     row = 0;
//     i = 0;
//     start = 0;
//     end = 0;
//     res = malloc(sizeof(char*)*wc + 1);
//     if (!res)
//         return (NULL);
//     while (s[i] != '\0')
//     {
//         while (s[i] == delimiter && s[i++] != '\0')
//         start = i;
//         while (s[i] != delimiter && s[i++] != '\0')
//         end = i;
//         if (start >= end || s[i + 1] == '\0')
//             break;
//         res[row] = ft_copy(s,start,(end - start));
//         row++;
//     }
//     res[row] = NULL;
//     return (res);
// }

// char    **ft_split(char const *s, char c)
// {
//     int wc;
//     char **res;
        
//     if (!s)
//         return (NULL);
//         while (*s == c)
//           s++;
//     wc = w_counter(s,c);
//     res = w_creator(s,c, wc);
//     return (res);
// }



