/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:50:12 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/13 01:50:14 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(char *str)
{
	int	i;
	int	number;
    int flag;

	i = 0;
	flag = 1;
	number = 0;
	while ((str[i] == '\t') || (str[i] == '\v') || (str[i] == '\f')
		|| (str[i] == '\r') || (str[i] == '\n') || (str[i] == ' '))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			flag *= -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		number = (number * 10) + ((int)str[i] - '0');
		i++;
	}
	return (number * flag);
}
#include <stdio.h>
int main ()
{
	printf("%d\n", ft_atoi("-123acv12"));
    printf("%d", atoi("-123acv12"));

}
