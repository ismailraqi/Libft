/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:48:52 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/14 23:08:45 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *fSrc;
    unsigned char *sSrc;
    size_t i;

    fSrc = (unsigned char *)s1;
    sSrc = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (fSrc[i] != sSrc[i])
            return (fSrc[i] - sSrc[i]);
        i++;
    }
    return (0);
}
