/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:42:57 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/19 16:51:05 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*src;
	size_t			size;
	int				i;

	i = 0;
	size = n;
	src = ptr;
	while (size--)
	{
		src[i] = (unsigned char)x;
		i++;
	}
	return (src);
}
