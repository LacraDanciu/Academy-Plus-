/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/19 15:59:19 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/19 15:59:21 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	j = 0;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(src + i) = *(src + j);
	return (dest);
}

int		ft_strlen(char **str)
{
	int		i;
	int		len;

	len = 0;
	i = 1;
	while (*(str + i) != 0)
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_join(char **tab, char *sep)
{
	char	*str;
	int		n;
	int		i;

	i = 0;
	n = ft_strlen(tab);
	str = (char *)malloc(sizeof(char) * n * 1000000000);
	while (*(str + i))
	{
		ft_strcat(str, *(tab + i));
		ft_strcat(str, sep);
		i++;
	}
	return (str);
}
