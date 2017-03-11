/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 07:53:26 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/08 16:20:24 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	aux;
	int		i;
	int		c;

	i = 0;
	c = 0;
	while (*(str + i) != '\0')
		i++;
	while (c < i / 2)
	{
		aux = *(str + c);
		*(str + c) = *(str + i - j - 1);
		*(str + i - j - 1) = aux;
		c++;
	}
	return (str);
}