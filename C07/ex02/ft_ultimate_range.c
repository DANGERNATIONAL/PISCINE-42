/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 22:56:41 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/26 21:40:37 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;

	a = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	while (max > min)
	{
		(*range)[a] = min;
		a++;
		min++;
	}
	return (a);
}

// int	main(void)
// {
// 	int	a = 50;
// 	int	b = 600;
// 	int c = 0;
// 	int *tableau;
// 	int ruellesombre;
// 	ruellesombre = ft_ultimate_range(&tableau, a, b);
// 	while (c < ruellesombre)
// 	{
// 		printf("%d\n", tableau[c]);
// 		c++;
// 	}
// 	return(0);
// }
