/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:29:44 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/14 19:36:27 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if ((str[a] > 64 && str[a] < 91) || (str[a] > 96 && str[a] < 123))
			a++;
		else
			return (0);
	}
	return (1);
}

// int main(void)
// {
// 	char bon[5]="LosC";
// 	char mauvais[5]="LO2C!";

// 	printf("%d\n", ft_str_is_alpha(bon));
// 	printf("%d", ft_str_is_alpha(mauvais));
// }
