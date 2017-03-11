/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 08:55:38 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/16 08:56:26 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_any(char **tab, int(*f)(char*))
{
	int i;

	i = 0;
	while (*(tab + i) != 0)
	{
		if (f(*(tab + i)))
			return (1);
		i++;
	}
	return (0);
}
