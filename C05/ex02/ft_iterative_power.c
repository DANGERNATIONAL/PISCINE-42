/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 03:50:13 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/20 12:27:01 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * a;
		power--;
	}
	return (nb);
}

// int main(void)
// {
// 	int nb = 2;
// 	int power = -1;

// 	printf("%d", ft_iterative_power(nb, power));
// 	return(0);
// }
