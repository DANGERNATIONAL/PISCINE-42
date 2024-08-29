/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 20:25:45 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/20 10:24:34 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_arg(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
		if (str[a] == '\0')
		{
			write(1, "\n", 1);
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	a;

	a = 1;
	while (a < argc)
	{
		ft_arg(argv[a]);
		a++;
	}
	return (0);
}
