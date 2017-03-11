/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 09:24:39 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/07 09:26:05 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

static void	determine(int x, int y, int i, int j)
{
	char c;

	if (i != 1 && j != 1 && i != y && j != x)
	{
		c = ' ';
	}
	else if ((j != 1 && j != x) || (i != 1 && i != y))
		c = 'B';
	if ((i == 1 && j == 1) || (i == y && j == 1))
	{
		c = 'A';
	}
	else if ((i == 1 && j == x) || (i == y && j == x))
	{
		c = 'C';
	}
	ft_putchar(c);
}

void		colle(int x, int y)
{
	int i;
	int j;

	i = 1;
	if (x > 0 && y > 0)
	{
		while (i <= y)
		{
			j = 1;
			while (j <= x)
			{
				determine(x, y, i, j);
				j++;
			}
			i++;
			ft_putchar('\n');
		}
	}
}
