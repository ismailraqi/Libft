/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:44:32 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/13 01:44:36 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *fsrc ;
    char *fdest ;
    
    fdest = (char *)dest;
    fsrc = (char *)src;
    if ((fsrc == NULL) &&(fdest == NULL))
        return NULL;
    if ((fsrc < fdest) && (fdest < fsrc + n))
    {
        while (n--)
            fdest[n] = fsrc[n];
    }
    else
    {
        while(n--)
            *fdest++ = *fsrc++;
    }
    return dest;
}
