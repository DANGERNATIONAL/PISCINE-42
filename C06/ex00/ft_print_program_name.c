/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 06:59:14 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/20 10:24:03 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_progname(char *str)
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
	(void)argc;
	ft_progname (argv[0]);
	return (0);
}
