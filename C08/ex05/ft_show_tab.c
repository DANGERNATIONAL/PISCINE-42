/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:46:23 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/27 19:24:38 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	ft_putchar(nb + '0');
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	a;

	a = 0;
	while (par[a].str)
	{
		ft_putstr(par[a].str);
		ft_putchar('\n');
		ft_putnbr(par[a].size);
		ft_putchar('\n');
		ft_putstr(par[a].copy);
		ft_putchar('\n');
		a++;
	}
}
// #include <stdlib.h>
//  int    main(void)
// {
//     char    *argv[] = {"OSC", "LILLE" , "5", "9"};
//     int    argc = 4;
// 	struct s_stock_str *tab = ft_strs_to_tab(argc, argv);
// 	ft_show_tab(tab);
// }
// #pragma once
// typedef struct s_stock_str
// {
// 	int		size;
// 	char	*str;
// 	char	*copy;
// }				t_stock_str;
// struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
