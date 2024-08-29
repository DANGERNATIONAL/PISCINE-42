/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 08:41:55 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/29 15:29:18 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_space(char *str)
{
	int	a;

	a = 0;
	while ((str[a] > 8 && str[a] < 14) || (str[a] == 32))
		a++;
	return (a);
}

int	ft_atoi(char *str)
{
	int	a;
	int	convert;
	int	min;

	convert = 0;
	a = ft_space(str);
	min = 0;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			min++;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		convert *= 10;
		convert += str[a] - '0';
		a++;
	}
	if (min % 2 == 1)
	{
		convert *= -1;
	}
	return (convert);
}

int main(void)
{
	char str[] = "     --+-23 5aa2358";

	printf("%d", ft_atoi(str));
	return(0);
}
