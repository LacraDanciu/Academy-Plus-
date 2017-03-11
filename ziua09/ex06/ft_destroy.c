/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/19 07:59:48 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/19 14:54:33 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void ft_destroy(char ***factory)
{
	int i;
	int j;

	while (**(factory + i) != 0)
	{
		while (*(factory + j) != 0)
		{
			free(factory[i][j]);
			j++;
		}
		i++;
	}
}
