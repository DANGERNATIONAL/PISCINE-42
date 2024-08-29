/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 20:56:03 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/20 13:01:46 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (a != 1)
	{
		nb = nb * a;
		a--;
	}
	return (nb);
}

// int main(void)
// {
// 	printf("%d",ft_iterative_factorial(5));
// 	return(0);
// }
