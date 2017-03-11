/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlosonti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 15:36:22 by mlosonti          #+#    #+#             */
/*   Updated: 2014/09/14 20:54:51 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_number(int tab[9][9])
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (!(tab[i][j] >= 0 && tab[i][j] <= 9))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_insert(int tab[9][9], char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			if (argv[i][j] != '.')
				tab[i - 1][j] = argv[i][j] - '0';
			else
				tab[i - 1][j] = 0;
			j++;
		}
		i++;
	}
}

int		ft_special_case1(int tab[9][9])
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 8)
		{
			k = j + 1;
			while (k < 9)
			{
				if (tab[i][j] == tab[i][k])
					if (tab[i][j] != 0)
						return (0);
				k++;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_special_case2(int tab[9][9])
{
	int		i;
	int		j;
	int		k;

	j = 0;
	while (j < 9)
	{
		i = 0;
		while (i < 8)
		{
			k = i + 1;
			while (k < 9)
			{
				if (tab[i][j] == tab[k][j])
					if (tab[i][j] != 0)
						return (0);
				k++;
			}
			i++;
		}
		j++;
	}
	return (1);
}
