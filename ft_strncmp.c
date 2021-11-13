/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:47:54 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/13 01:47:55 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
        i++;
    return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
int main ()
{
    const char *str1 = "test";
    const char *str2 = "tqst";
    int x = ft_strncmp(str1,str2,2);
    printf("%i",x);
}
