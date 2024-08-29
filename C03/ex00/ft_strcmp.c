/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:58:19 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/18 05:07:08 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

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

// int	main(void)
// {
// 	char chaine1[] = "LoscQwafwaf";
// 	char chaine2[] = "Losc44232";

// 	printf("%d\n", ft_strcmp(chaine1, chaine2));
// 	printf("%d", strcmp(chaine1, chaine2));
// 	return(0);
// }
