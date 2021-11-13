/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:52:54 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/13 01:52:55 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_is(char src, char *set)
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
int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}
char *ft_revtrim(char *src, char *set, size_t i)
{
    size_t index;
    size_t len;
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
    str = (char *)malloc(sizeof(char)*(l + 1));
    while (index <= l)
    {
        str[index] = src[index];
        index++;
    }
    return (str);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t j;
    size_t i;
    size_t d;
    char *str;

    i = 0;
    while (s1[i] != '\0')
    {
        if(!ft_is(s1[i], set))
            break;
        i++;
    }
    j = 0;
    d = ft_strlen(s1) - i;
    str = (char *)malloc(sizeof(char)*(d + 1));
    while (s1[i] != '\0')
    {
        str[j] = s1[i];
        i++;
        j++;
    }
    str[j]='\0';
    str = ft_revtrim(str, set, ft_strlen(str));
    return (str);
}
