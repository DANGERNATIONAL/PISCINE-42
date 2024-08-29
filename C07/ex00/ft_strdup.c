/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:41:33 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/26 21:38:48 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

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

// int	main(void)
// {
// 	int		a = 0;
// 	char	*dest;
// 	char	*src;

// 	src = "LOLOL;OLOLOLO";
// 	dest = ft_strdup(src);
// 	while (dest[a] != '\0')
// 	{
// 		write(1, &dest[a], 1);
// 		a++;
// 	}
// 	free (dest);
// 	return (0);
// }
