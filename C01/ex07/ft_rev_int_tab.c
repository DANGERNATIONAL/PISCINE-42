/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 04:51:24 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/28 15:25:52 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size / 2)
	{
		b = tab[a];
		tab[a] = tab[size - a - 1];
		tab[size - a - 1] = b;
		a++;
	}
}
// int main(void)
// {
// 	int str[] = {1,2,3,4,5};
// 	int taille = 5;
// 	int a = 0;
// 	ft_rev_int_tab(str, taille);
// 	while (a < taille)
// 	{
// 		printf("%d", str[a]);
// 		a++;
// 	}
// 	return(0);
// }
