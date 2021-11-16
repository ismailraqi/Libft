/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:47:23 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/16 01:24:46 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, char c)
{
    size_t i;
    char *res;
    size_t len;
    

    res = (char *)s;
    len = ft_strlen(res);
    if (c == '\0')
        return (res + len);
    i = 0;
    while (i < len)
    {
        if (s[i] == c)
            return (res + i);
        i++;
    }
    return (NULL);
}
