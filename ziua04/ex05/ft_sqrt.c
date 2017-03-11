/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 11:15:40 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/09 12:22:41 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		closeenough(double a, double b)
{
	int c;

	c = a - b;
	if (a - b < 0)
		c = b - a;
	return (c < .001);
}

double	betterguess(double x, double g)
{
	return ((g + x / g) / 2);
}

double	test(double x, double g)
{
	if (closeenough(x / g, g))
		return (g);
	else
		return (test(x, betterguess(x, g)));
}

int		ft_sqrt(int nb)
{
	int n;

	if (nb < 0)
		return (0);
	else
	{
		n = test(nb, 1);
		if (n * n == nb)
			return (n);
		else
			return (0);
	}
}
