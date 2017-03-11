/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 09:18:33 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/07 09:18:48 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

static void	determine(int x, int y, int i, int j)
{
	if (i != 1 && j != 1 && i != y && j != x)
	{
		ft_putchar(' ');
	}
	else if (j != 1 && j != x)
	{
		ft_putchar('-');
	}
	else if (i != 1 && i != y)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar('o');
	}
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
