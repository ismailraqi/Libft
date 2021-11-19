/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:58:26 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/19 18:19:14 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		size;
	char	*res;

	res = (char *)s;
	size = ft_strlen(s);
	while (size >= 0)
	{
		if (s[size] == (char)c)
			return (res + size);
		size--;
	}
	return (NULL);
}
