/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 23:04:27 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/14 00:19:56 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 64 && str[a] < 91)
			str[a] += 32;
		a++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	test[5]="10sC";

// 	printf("%s", ft_strlowcase(test));
// }
