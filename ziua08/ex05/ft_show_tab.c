/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 13:05:47 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/15 19:20:28 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void ft_putnbr(int nb)
{
	int v[15];
	int i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	while (nb != 0)
	{
		v[i] = nb % 10;
		i++;
		nb = nb / 10;
	}
	while (i > 0)
	{
		i--;
		ft_putchar(v[i] + 48);
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_show_tab(t_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while ((par + i)->str != 0)
	{
		ft_putnbr((par + i)->size_param);
		ft_putstr((par + i)->str);
		j = 0;
		while ((par + i)->tab[j] != 0)
		{
			ft_putstr((par + i)->tab[j]);
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}
