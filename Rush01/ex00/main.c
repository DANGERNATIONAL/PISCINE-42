/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 09:16:06 by artgirar          #+#    #+#             */
/*   Updated: 2024/08/17 18:12:57 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (!((argv[1][i] >= '1' && argv[1][i] <= '4')
				|| argv[1][i] == ' '))
			{
				return (1);
			}
			i++;
		}
		if (i != 31)
		{
			return (1);
		}
		printf("c est good !");
		return (0);
	}
	return (1);
}
