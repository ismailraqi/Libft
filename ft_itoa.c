/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:54:19 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/18 01:18:05 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_counter(unsigned int lon)
{
    int i;

    i = 0;
    if (lon == 0)
        return (1);
    while (lon != 0)
    {
        lon /= 10;    
        i++;
    }
    return i;
}
// char *ft_writer(char *res, int flag, int i, unsigned int n)
// {
//     if (flag)
//         res[0] = '-';
//     res[i--] = '\0';
    
        
// }
char *ft_itoa(int n)
{
    int flag;
    int i;
    unsigned int lon;
    char *res;

    flag = 0;
    lon = n;
    if (n < 0)
    {
        flag = 1;
        lon = n * -1;
    }
    i = ft_counter(lon) + flag;
    res = (char *)malloc(sizeof(char)*(i + flag));
    if(!res)
        return (NULL);
    if (flag)
        res[0] = '-';
    res[i--] = '\0';
    while (i >= flag)
    {
        res[i--] = (lon % 10) + '0';
        lon /= 10;
    }
    return (res);
}
