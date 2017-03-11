/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 13:05:47 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/15 13:05:49 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_par.h"
void ft_show_tab(t_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while ((par + i)->str != 0)
	{
		printf("%d\n%s\n", (par + i)->size_param, (par + i)->str);
		j = 0;
		while ((par + i)->tab[j] != 0)
		{
			printf("%s\n", (par + i)->tab[j]);
			j++;
		}
		i++;
	}
}
