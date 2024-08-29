/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 01:47:41 by rbardet-          #+#    #+#             */
/*   Updated: 2024/08/27 03:34:46 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		len;

	len = ft_strlen(src) + 1;
	dst = malloc(len);
	if (dst == NULL)
	{
		return (NULL);
	}
	ft_strcpy(dst, src);
	return (dst);
}

char	*concat_et_avance(char *dest, char *src)
{
	dest = ft_strcpy(dest, src);
	while (*dest != '\0')
		dest++;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*result;

	if (size == 0)
		return (ft_strdup(""));
	len = 0;
	i = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += (size - 1) * ft_strlen(sep);
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		strcat(result, strs[i]);
		if (++i < size)
			strcat(result, sep);
	}
	return (result);
}

int    main(void)
{
    char    *strs[] = {"a", "b", "c", "d", "e"};
    char    *sep = "99";
    int        size = 5;
    char    *result = ft_strjoin(size, strs, sep);

    printf("%s\n", result);
    free(result);
    return (0);
}
