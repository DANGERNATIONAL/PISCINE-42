/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:35:23 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/14 00:05:41 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 64 && str[a] < 91)
			a++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char bon[5]="LOSC";
// 	char mauvais[5]="Lo2!";

// 	printf("%d\n", ft_str_is_uppercase(bon));
// 	printf("%d", ft_str_is_uppercase(mauvais));
// }
