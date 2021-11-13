/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:51:55 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/13 01:51:56 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *news;
    size_t preslen;
    size_t sufslen;
    size_t i;
    size_t j;

    preslen = ft_strlen(s1);
    sufslen = ft_strlen(s2);
    news = (char *)malloc(preslen + sufslen + 1);
    i = 0;
    j = 0;
    if (!news)
        return (NULL);
    while (s1[i] != '\0')
    {
        news[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        news[i] = s2[j];
        j++;
        i++;
    }

    news[i] = '\0'; 
    return(news);
}

