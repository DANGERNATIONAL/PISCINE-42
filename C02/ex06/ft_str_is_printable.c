/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:55:00 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/14 18:44:10 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 31 && str[a] < 127)
			a++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	bon[10] ="!ILLE oSc~";
// 	char	mauvais[] ="\n";

// 	printf("%d\n", ft_str_is_printable(bon));
// 	printf("%d", ft_str_is_printable(mauvais));
// }
