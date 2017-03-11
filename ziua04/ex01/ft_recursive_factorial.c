/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 08:47:58 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/09 08:48:05 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if ((nb > 1) && (nb < 13))
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb > 12)
		return (0);
	else
		return (1);
}
