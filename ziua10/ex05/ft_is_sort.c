/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 08:59:53 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/16 10:10:45 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;

	i = 0;
	if (f(tab[i], tab[i + 1]) >= 0)
	{
		while (f(tab[i], tab[i + 1]) >= 0 && i < length)
			i++;
		if (i == length - 1)
			return (1);
	}
	else if (f(tab[i], tab[i + 1]) <= 0)
	{
		while (f(tab[i], tab[i + 1]) <= 0 && i < length)
			i++;
		if (i == length - 1)
			return (1);
	}
	return (0);
}
