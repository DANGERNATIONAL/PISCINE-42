/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:08:42 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/10 20:56:30 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// void main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 10;
// 	b = 5;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d, %d", div, mod);

// }
