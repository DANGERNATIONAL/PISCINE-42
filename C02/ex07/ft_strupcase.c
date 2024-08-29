/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:22:22 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/14 00:17:18 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 96 && str[a] < 123)
			str[a] -= 32;
		a++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	test[5]="10sC";

// 	printf("%s", ft_strupcase(test));
// }
