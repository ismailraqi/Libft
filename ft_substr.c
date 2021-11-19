/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:51:41 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/19 13:46:38 by iraqi            ###   ########.fr       */
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
    if (len >= (slen - start))
        len = slen - start;
    substr = (char *)malloc(sizeof(char)*(len + 1));
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
// 	char *s = "all of this !";
// 	char *ret = ft_substr(s, 0, 42000);

//     printf("%s",ret);
//     return 0;
// }
