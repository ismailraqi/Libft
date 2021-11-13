/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:48:23 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/13 01:48:24 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *memchr(const void *s, int c, size_t n)
{
    unsigned char *src;
    unsigned char chr;
    size_t i;

    src = (unsigned char *)s;
    chr = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if (src[i] == chr)
            return (src + i);
        i++;
    }
    return (NULL);
}
