/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:24:46 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/14 21:25:07 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 47 && str[a] < 58)
			a++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	bon[6] = "1234";
// 	char mauvais[5]="Losc";

// 	printf("%d\n", ft_str_is_numeric(bon));
// 	printf("%d", ft_str_is_numeric(mauvais));
// }
