/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:28:40 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/19 18:18:21 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(unsigned int lon)
{
	int	i;

	i = 0;
	if (lon == 0)
		return (1);
	while (lon != 0)
	{
		lon /= 10;
		i++;
	}
	return (i);
}

static char	*ft_filler(int flag, char *res, unsigned int lon, int i)
{
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

char	*ft_itoa(int n)
{
	int				flag;
	int				i;
	unsigned int	lon;
	char			*res;
	int				k;

	k = 0;
	flag = 0;
	lon = n;
	if (n <= -1)
	{
		flag = 1;
		lon = n * -1;
	}
	i = ft_counter (lon) + flag;
	if (n == 0)
		k = 1;
	res = malloc (sizeof(char) * (i + flag + k));
	if (!res)
		return (NULL);
	res = ft_filler(flag, res, lon, i);
	return (res);
}
