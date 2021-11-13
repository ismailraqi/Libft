/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:45:19 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/13 01:45:21 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t srclen;
    size_t i;

    srclen = ft_strlen(src);
    if (dst == NULL || src == NULL)
        return (0);
    if (size != 0)
    {
        while (src[i] != '\0' && i < (srclen - 1))
        {
            dst[i] == src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (srclen);
}
