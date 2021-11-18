/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:51:41 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/18 12:42:30 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    size_t slen;
    if (!s)
        return (NULL);
    slen = ft_strlen(s);
    if (start >= slen)
        return (ft_strdup(""));
    substr = (char *)malloc(sizeof(char)*((slen - start) + 1));
    if (!substr)
        return (NULL);
    i = 0;
    while (i < len && s[i] != '\0')
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}
// int main ()
// {
//     char *str = "i just want this part #############";
// 	size_t size = 10;
// 	int ret_size;

// 	char *s = ft_substr(str, 5, size);
//     printf("%s",s);
//     return 0;
// }
