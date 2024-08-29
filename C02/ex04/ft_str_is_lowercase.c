/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:39:03 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/14 00:03:38 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 96 && str[a] < 123)
			a++;
		else
			return (0);
	}
	return (1);
}
// int main(void)
// {
// 	char bon[5]="losc";
// 	char mauvais[9]="LILL3 OSC";

// 	printf("%d\n", ft_str_is_lowercase(bon));
// 	printf("%d", ft_str_is_lowercase(mauvais));
// }
