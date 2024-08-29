/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:15:21 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/17 18:12:06 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (src[a] && a < n)
	{
		if (src[a] != '\0')
		{
			dest[a] = src[a];
			a++;
		}
	}
	while (a != n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

int	main(void)
{
	char	source[5] = "Losc";
	unsigned int	taille = 3;
	char	destination[taille];
	printf("%s", ft_strncpy(destination, source, taille));
}
