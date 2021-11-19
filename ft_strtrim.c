/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:52:54 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/19 18:07:11 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		slen;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	slen = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	if (!s1[i])
		return (ft_strdup(""));
	start = i;
	while (slen && ft_strchr(set, s1[slen]))
		slen--;
	res = (char *)malloc(sizeof(char) * ((slen + 1) - start) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (start <= slen)
		res[i++] = (char)s1[start++];
	res[i] = '\0';
	return (res);
}
