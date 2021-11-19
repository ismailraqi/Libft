/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:51:55 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/19 17:53:01 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;
	size_t	preslen;
	size_t	sufslen;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	preslen = ft_strlen(s1);
	sufslen = ft_strlen(s2);
	news = (char *)malloc(preslen + sufslen + 1);
	if (!news)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		news[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		news[i++] = s2[j++];
	news[i] = '\0';
	return (news);
}
