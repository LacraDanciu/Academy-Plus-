/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/19 15:42:24 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/19 15:42:26 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_active_bits(int value)
{
	unsigned int	nr;
	int				i;
	int				nbr;

	nr = 0;
	nbr = value;
	while (nbr != 0)
	{
		if (nbr % 2 == 1)
			nr++;
		nbr = nbr / 2;
	}
	return (nr);
}
