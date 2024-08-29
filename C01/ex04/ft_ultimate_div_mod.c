/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:38:24 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/10 20:56:39 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	stock;

	stock = *a;
	*a = *a / *b;
	*b = stock % *b;
}
// void	main(void)
// {
// int a;
// int b;

// a = 12;
// b = 5;
// ft_ultimate_div_mod(&a, &b);
// printf("%d, %d", a, b);

// }
