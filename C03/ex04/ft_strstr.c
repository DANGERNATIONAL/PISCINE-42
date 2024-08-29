/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:29:09 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/28 19:51:07 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	a = 0;
	b = 0;

	if (str[a + b] || str[b])
	{
		/* code */
	}

	while (str[a] != '\0')
	{
		if (str[a + b] == to_find[b] && to_find[b] != '\0')
		{
			b++;
		}
		if (to_find[b] == '\0')
		{
			return(&to_find[b]);
		}
		a++;
	}
	return(0);
}
int main (void)
{
	char str1[] = "LILLE OSC";
	char str2[] = "OS";
	printf("%s", ft_strstr(str1, str2));
	return(0);
}
