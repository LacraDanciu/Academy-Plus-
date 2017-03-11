/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 09:21:11 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/07 09:21:15 by ddanciu          ###   ########.fr       */
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
		c = '*';
	if ((i == y && j == 1) || (i == 1 && j == x))
	{
		c = 92;
	}
	else if ((i == 1 && j == 1) || (i == y && j == x))
	{
		c = '/';
	}
	if (i == 1 && j == 1)
		c = '/';
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
