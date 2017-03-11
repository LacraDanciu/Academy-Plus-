/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlosonti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 13:08:42 by mlosonti          #+#    #+#             */
/*   Updated: 2014/09/14 20:57:15 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_line(int k, int tab[9][9], int i);
int		ft_colon(int k, int tab[9][9], int j);
int		ft_bloc(int k, int tab[9][9], int i, int j);
void	ft_show_error(void);
void	ft_putchar(char c);
int		ft_number(int tab[9][9]);
void	ft_insert(int tab[9][9], char **argv);
int		ft_special_case1(int tab[9][9]);
int		ft_special_case2(int tab[9][9]);

int		g_sol;
int		g_tab[9][9];

void	ft_copy(int tab[9][9])
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			g_tab[i][j] = tab[i][j];
			j++;
		}
		i++;
	}
}

void	ft_show(int tab[9][9])
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(tab[i][j] + '0');
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		ft_test(int poz, int tab[9][9])
{
	if (poz == 9 * 9)
	{
		g_sol++;
		if (g_sol == 1)
			ft_copy(tab);
		return (1);
	}
	return (0);
}

int		back(int tab[9][9], int position)
{
	int		i;
	int		j;
	int		k;

	if (ft_test(position, tab))
		return (1);
	if (g_sol > 2)
		return (0);
	i = position / 9;
	j = position % 9;
	if (tab[i][j] != 0)
		return (back(tab, position + 1));
	k = 1;
	while (k <= 9)
	{
		if (ft_line(k, tab, i) && ft_colon(k, tab, j) && ft_bloc(k, tab, i, j))
		{
			tab[i][j] = k;
			back(tab, position + 1);
		}
		k++;
	}
	tab[i][j] = 0;
	return (0);
}

int		main (int argc, char **argv)
{
	int		tab[9][9];

	if (argc == 10)
	{
		ft_insert(tab, argv);
		if (ft_number(tab) == 1)
		{
			if (ft_special_case1(tab) == 0 || ft_special_case2(tab) == 0)
				ft_show_error();
			else
			{
				back(tab, 0);
				if (g_sol == 1)
					ft_show(g_tab);
				else
					ft_show_error();
			}
		}
		else
			ft_show_error();
	}
	else
		ft_show_error();
	return (0);
}
