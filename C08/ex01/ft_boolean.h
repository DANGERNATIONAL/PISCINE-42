/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 07:45:21 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/27 18:28:07 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# include <string.h>

typedef int	t_bool;

int	ft_even(int nbr)
{
	if (nbr % 2 == 0)
		return (1);
	else
		return (0);
}

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN ft_even
# define TRUE 1
# define FALSE 0
# define SUCCESS 0

#endif
