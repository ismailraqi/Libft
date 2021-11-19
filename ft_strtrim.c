/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:52:54 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/19 11:45:46 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int ft_is(char src, const char *set)
// {
//     size_t i;
    
//     i = 0;
//     while (set[i] != '\0')
//     {
//         if (src == set[i])
//             return (1);
//         i++;
//     }
//     return (0);
// }
// char *ft_revtrim(char *src, const char *set, size_t i)
// {
//     size_t index;
//     size_t l;
//     char *str;
  
//     l = i - 1;
//     while (i >= 0)
//     {
//         if (!ft_is(src[l], set))
//             break;
//         l--;
//     }
//     index = 0;
//     str = (char *)malloc(sizeof(char)*(l + 2));
//     if (!str)
//         return (NULL);
//     while (index <= l)
//     {
//         str[index] = src[index];
//         index++;
//     }
//     str[index] = '\0';
//     return (str);
// }

char *ft_strtrim(char const *s1, char const *set)
{
    // size_t j;
    // size_t i;
    // size_t d;
    // char *str;

    // i = 0;
    // if (!s1 || !set)
    //     return (NULL);
    // while (s1[i] != '\0')
    // {
    //     if(!ft_is(s1[i], set))
    //         break;
    //     i++;
    // }
    // if (!s1[i])
    //     return (ft_strdup(""));
    // j = 0;
    // d = ft_strlen(s1) - i;
    // str = (char *)malloc(sizeof(char)*(d + 1));
    // if (!str)
    //     return (NULL);
    // while (s1[i] != '\0')
    //     str[j++] = s1[i++];
    // str[j]='\0';
    // str = ft_revtrim(str, set, ft_strlen(str));
    // return (str);
    int i;
    int start;
    int end;
    int slen;
    char *res;
    
    if (!s1 || !set)
        return (NULL);
    slen = ft_strlen(s1);
    i = 0;
    while (s1[i] != '\0' && ft_strchr(set,s1[i]))
        i++;
    if (!s1[i])
        return (ft_strdup(""));
    start = i;
    while (slen && ft_strchr(set,s1[slen]))
        slen--;
    end = slen + 1;
    res = (char *)malloc(sizeof(char)*((end - start) + 1));
    if (!res)
        return (NULL);
    i = 0;
    while (start <= (end - 1))
        res[i++] = (char)s1[start++];
    res[i] = '\0';
    return (res);
}
// int main(void)
// {
//     char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
// 	char *s2 = "Hello \t  Please\n Trim me !";
// 	char *ret = ft_strtrim(s1, " \n\t");
//     printf("%s",ret);
//     return 0;
//}


