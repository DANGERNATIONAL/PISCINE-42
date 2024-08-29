/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 06:10:16 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/20 13:01:38 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
// int main(void)
// {
// 	printf("%d", ft_find_next_prime(2));
// 	return(0);
// }
