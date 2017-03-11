/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlosonti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 15:35:59 by mlosonti          #+#    #+#             */
/*   Updated: 2014/09/13 15:54:28 by mlosonti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_line(int k, int tab[9][9], int i)
{
	int		j;

	j = 0;
	while (j < 9)
	{
		if (tab[i][j] == k)
			return (0);
		j++;
	}
	return (1);
}

int		ft_colon(int k, int tab[9][9], int j)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (tab[i][j] == k)
			return (0);
		i++;
	}
	return (1);
}

int		ft_bloc(int k, int tab[9][9], int i, int j)
{
	int		i1;
	int		j1;

	i1 = i - (i % 3);
	j1 = j - (j % 3);
	i = i1;
	while (i < i1 + 3)
	{
		j = j1;
		while (j < j1 + 3)
		{
			if (tab[i][j] == k)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_show_error(void)
{
	char	*a;
	int		i;

	i = 0;
	a = "Erreur";
	while (a[i] != 0)
	{
		write(1, &a[i], 1);
		i++;
	}
	write(1, &"\n", 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
