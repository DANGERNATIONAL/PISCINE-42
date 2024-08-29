/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:22:26 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/20 12:26:53 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb == 2)
	{
		return (1);
	}
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	while (nb % a != 0)
	{
		a++;
		if (a == nb)
		{
			return (1);
		}
	}
	return (0);
}

// int main(void)
// {
// 	printf("%d", ft_is_prime(-8));
// 	return(0);
// }
