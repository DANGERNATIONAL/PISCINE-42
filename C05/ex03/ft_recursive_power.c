/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 08:58:53 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/20 06:52:07 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power >= 1)
		return (nb * ft_recursive_power (nb, power - 1));
	return (0);
}
// int main(void)
// {
// 	int nb = 46;
// 	int power = 1;

// 	printf("%d", ft_recursive_power(nb, power));
// 	return(0);
// }
