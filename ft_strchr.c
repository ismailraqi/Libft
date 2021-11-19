/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:47:23 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/19 17:50:11 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*res;
	size_t	len;

	res = (char *)s;
	len = ft_strlen(res);
	if ((char)c == '\0')
		return (res + len);
	i = 0;
	while (i < len)
	{
		if (s[i] == (char)c)
			return (res + i);
		i++;
	}
	return (NULL);
}
