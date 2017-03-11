/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 09:44:32 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/09 10:04:26 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_recursive_power(int nb, int power)
{
	int c;

	c = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else 
		return (c * ft_recursive_power(nb, power - 1));
}

int main()
{
	int b;

	b = ft_recursive_power(2, 31);
	printf("%d", b);
	return (0);
}
