/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 01:19:58 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/28 18:16:26 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	while (a <= 9);
	{
		b = 0;
		while (b <= 9);
		{
			c = 0;
			while (c <= 9)
			{
				d = 0;
				while (d <= 9)
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, &c, 1);
					write(1, &d, 1);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	return (a);


}
int	main(void)
{
	ft_print_comb2();
	return(0);
}
