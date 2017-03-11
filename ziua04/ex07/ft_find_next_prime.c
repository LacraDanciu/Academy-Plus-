/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 15:21:43 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/09 15:21:58 by ddanciu          ###   ########.fr       */
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

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 0)
		return (0);
	while (i <= test(nb, 1))
	{
		if (nb % i++ == 0)
			return (0);
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	else if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
