/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 08:59:37 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/17 20:31:18 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	while (src[a] != '\0' && a < nb)
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char source[]="Losc";
// 	char destination[]="Losc";
// 	char taille=2;

// 	printf("%s\n", ft_strncat(destination, source, taille));
// 	printf("%s", strncat(destination, source, taille));
// 	return(0);
// }
