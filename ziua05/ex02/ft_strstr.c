/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 15:23:19 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/10 15:23:23 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;
	int z;

	i = 0;
	n = 0;
	z = 0;
	while (to_find[n] != '\0')
		n++;
	if (n == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[z] == str[i + z])
		{
			if (z == n - 1)
				return (str + i);
			z++;
		}
		z = 0;
		i++;
	}
	return (0);
}
