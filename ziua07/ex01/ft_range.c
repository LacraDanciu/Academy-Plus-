/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 12:03:44 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/12 12:57:54 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int c;

	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(tab) * (max - min));
	i = 0;
	c = max - min;
	while (i < c)
	{
		*(tab + i) = min;
		i++;
		min++;
	}
	return (tab);
}
