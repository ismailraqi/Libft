/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:44:08 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/13 01:44:10 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *fdest;
    const char *fsrc;
    size_t i;
    int d;
 
    fdest = (unsigned char *)dest;
    fsrc = (const unsigned char *)src;
    i = n;
    d = 0;
    if ((fdest != NULL) && (fsrc != NULL))
    {
        while (i > 0)
        {
            fdest[d] = fsrc[d];
            d++;
            i--;
        }
    }
    return dest;
}
