/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:09:59 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/27 14:28:20 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *tab);

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strdup(char *src)
{
	int		a;
	char	*dest;
	int		longueur;

	a = 0;
	longueur = ft_strlen(src);
	dest = malloc(sizeof(char) * (longueur + 1));
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			a;

	a = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (a < ac)
	{
		tab[a].size = ft_strlen(av[a]);
		tab[a].str = av[a];
		tab[a].copy = ft_strdup(av[a]);
		a++;
	}
	return (tab);
}

// int	main(int argc, char *argv[])
// {
// 	argc = 3;
// 	argv[0] = "LILLE";
// 	argv[1] = "OSC";
// 	argv[2] = "LOSC";
// 	ft_strs_to_tab(argc, argv);
// 	return (0);
// }
// #pragma once
// typedef struct s_stock_str
// {
// 	int		size;
// 	char	*str;
// 	char	*copy;
// }				t_stock_str;
// #include <stdio.h>
// printf("%d", tab[a].size);
// printf("%s", tab[a].str);
// printf("%s", tab[a].copy);
