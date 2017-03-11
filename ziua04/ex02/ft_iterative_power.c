/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 09:37:11 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/09 09:37:17 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int c;

	c = nb;
	if (power < 0)
		nb = 0;
	else
		nb = 1;
	while (power > 0)
	{
		nb = nb * c;
		power--;
	}
	return (nb);
	if (power == 0)
		return (1);
}
