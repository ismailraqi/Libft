/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:45:44 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/13 01:45:46 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dstLen;
    size_t srcLen;
    size_t result;
    size_t i;

    dstLen = ft_strlen(dst);
    srcLen = ft_strlen(src);
    if (size > dstLen)
        result = srcLen + dstLen;
    else 
        result = srcLen + size;
    i = 0;
    while (dst[i] != '\0' && size > (dstLen + 1))
    {
        dst[dstLen] = src[i];
        dstLen++;
        i++;
    }
    dst[i] = '\0';
    return (result);
}
