/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 01:42:08 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/22 02:14:12 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putstr(char *str)
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

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
	{
		a++;
	}
	return ((s1[a]) - (s2[a]));
}

int	main(int argc, char *argv[])
{
	int		a;
	int		b;
	char	*onestla;

	a = 1;
	while (argc > a)
	{
		b = a + 1;
		while (argc > b)
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
			{
				onestla = argv[a];
				argv[a] = argv[b];
				argv[b] = onestla;
			}
			b++;
		}
		ft_putstr (argv[a]);
		a++;
	}
	return (0);
}
