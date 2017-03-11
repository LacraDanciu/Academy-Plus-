/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 08:53:48 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/16 08:53:51 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int *ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *p;

	p = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		*(p + i) = f(*(tab + i));
		i++;
	}
	return (p);
}
