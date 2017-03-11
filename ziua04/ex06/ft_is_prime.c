/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 11:58:59 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/09 12:44:57 by ddanciu          ###   ########.fr       */
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
	return (test(nb, 1));
}

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= ft_sqrt(nb))
	{
		if (nb % i++ == 0)
			return (0);
	}
	return (1);
}
