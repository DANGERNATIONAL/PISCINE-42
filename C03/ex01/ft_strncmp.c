/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 22:22:00 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/18 05:07:39 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && a < n && s1[a] == s2[a])
	{
		a++;
	}
	if (a == n)
	{
		return (0);
	}
	return ((s1[a] - s2[a]));
}

// int	main(void)
// {
// 	char chaine1[]="aaaaaab";
// 	char chaine2[]="aaaaaaa";
// 	unsigned int taille = 6;

// 	printf("%d\n", ft_strncmp(chaine1, chaine2, taille));
// 	printf("%d", strncmp(chaine1, chaine2, taille));
// 	return(0);
// }
