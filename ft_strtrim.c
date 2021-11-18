/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:52:54 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/18 03:10:39 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_is(char src, const char *set)
{
    size_t i;
    
    i = 0;
    while (set[i] != '\0')
    {
        if (src == set[i])
            return (1);
        i++;
    }
    return (0);
}
char *ft_revtrim(char *src, const char *set, size_t i)
{
    size_t index;
    size_t l;
    char *str;
  
    l = i - 1;
    while (i >= 0)
    {
        if (!ft_is(src[l], set))
            break;
        l--;
    }
    index = 0;
    str = (char *)malloc(sizeof(char)*(l + 2));
    if (!str)
        return (NULL);
    while (index <= l)
    {
        str[index] = src[index];
        index++;
    }
    str[index] = '\0';
    return (str);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t j;
    size_t i;
    size_t d;
    char *str;

    i = 0;
    if (!s1 || !set)
        return (NULL);
    while (s1[i] != '\0')
    {
        if(!ft_is(s1[i], set))
            break;
        i++;
    }
    if (!s1[i])
        return (ft_strdup(""));
    j = 0;
    d = ft_strlen(s1) - i;
    str = (char *)malloc(sizeof(char)*(d + 1));
    if (!str)
        return (NULL);
    while (s1[i] != '\0')
        str[j++] = s1[i++];

    str[j]='\0';
    str = ft_revtrim(str, set, ft_strlen(str));
    return (str);
}


