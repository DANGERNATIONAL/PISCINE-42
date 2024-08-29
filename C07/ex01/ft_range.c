/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 08:08:53 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/26 21:37:20 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tableau;
	int	a;

	a = 0;
	if (min >= max)
	{
		return (0);
	}
	tableau = malloc(sizeof(int) * (max - min));
	while (a < (max - min))
	{
		tableau[a] = min + a;
		a++;
	}
	return (tableau);
}

// int	main(void)
// {
// 	int	a = 50;
// 	int	b = 600;
// 	int c = 0;
// 	int *tableau;
// 	tableau = ft_range(a, b);
// 	while (c < (b - a))
// 	{
// 		printf("%d\n", tableau[c]);
// 		c++;
// 	}
// 	free(tableau);
// 	return(0);
// }
