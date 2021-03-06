/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 10:47:47 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/16 20:55:15 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_putnbr(int nb)
{
	int v[15];
	int i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb == 0)
		ft_putchar('0');
	while (nb != 0)
	{
		v[i] = nb % 10;
		i++;
		nb = nb / 10;
	}
	while (i > 0)
	{
		i--;
		ft_putchar(v[i] + 48);
	}
}
