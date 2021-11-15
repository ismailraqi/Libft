/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:50:39 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/14 21:58:19 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
void *ft_calloc(size_t count, size_t size)
{
    void *res;

    res = malloc(count*size);
    if (!res)
        return (NULL);
    ft_bzero(res,count*size);
    return (res);
}
