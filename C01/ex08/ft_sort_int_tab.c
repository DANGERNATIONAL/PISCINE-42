/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:56:07 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/28 14:47:20 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] - tab[b] > 0)
			{
				c = tab[a];
				tab[a] = tab[b];
				tab[b] = c;
			}
			b++;
		}
		a++;
	}
}
// int main(void)
// {
// 	int str[] = {3,2,4,5,1,4,5};
// 	int taille = 7;
// 	int a = 0;
// 	ft_sort_int_tab(str, taille);
// 	while (a < taille)
// 	{
// 		printf("%d", str[a]);
// 		a++;
// 	}
// 	return(0);
// }
