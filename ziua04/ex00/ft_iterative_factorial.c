/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 19:14:21 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/09 06:25:37 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int a;
	int i;

	a = 1;
	i = 1;
	if (nb == 0)
		a = 1;
	else if (nb > 12)
		a = 0;
	else
	{
		while (i <= nb)
		{
			a = a * i;
			i++;
		}
	}
	return (a);
}