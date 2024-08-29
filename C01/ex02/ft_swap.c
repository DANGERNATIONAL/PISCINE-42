/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:11:00 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/28 14:32:12 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a,	int *b)
{
	int	stock;

	stock = *a;
	*a = *b;
	*b = stock;
}
// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a	=	1;
// 	b	=	2;
// 	ft_swap(&a, &b);
// 	printf("%d, %d", a, b);
// 	return 0;
// }
