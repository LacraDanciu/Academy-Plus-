/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 19:05:27 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/10 19:41:43 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		low(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int		up(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		notspace(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (*(str + i) != '\0')
	{
		if ((low(*(str + i)) == 1) && (word == 0))
			*(str + i) = *(str + i) - 32;
		else if ((up(*(str + i)) == 1) && (word == 1))
			*(str + i) = *(str + i) + 32;
		if (notspace(*(str + i)) == 0)
			word = 0;
		else
			word = 1;
		i++;
	}
	return (str);
}
