/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:44:08 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/14 21:56:27 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *fdest;
    unsigned const char *fsrc;
    size_t i;
    int d;
    if (dest == NULL && src == NULL)
        return NULL;
    fdest = (unsigned char *)dest;
    fsrc = (const unsigned char *)src;
    i = n;
    d = 0;
    while (i > 0)
    {
        fdest[d] = fsrc[d];
        d++;
        i--;
    }
    return dest;
}
