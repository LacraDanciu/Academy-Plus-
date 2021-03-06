/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 20:40:03 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/10 20:43:04 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (*(str + i) == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		if ((*(str + i) <= 31) || (*(str + i) >= 127))
			return (0);
		i++;
	}
	return (1);
}
