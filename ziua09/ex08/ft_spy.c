/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/19 08:37:53 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/19 11:54:58 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		g_i = 1;

void	write_alert(void)
{
	write(1, "Alert!!!\n", 9);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

int		find_alert(char *str)
{
	if (ft_strcmp(str, "president") == 0)
	{
		write_alert();
		return (1);
	}
	if (ft_strcmp(str, "attack") == 0)
	{
		write_alert();
		return (1);
	}
	if (ft_strcmp(str, "powers") == 0)
	{
		write_alert();
		return (1);
	}
	return (0);
}

void	to_minuscule(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	temp[1000];
	int		j;
	int		k;

	while (g_i < argc)
	{
		j = 0;
		k = 0;
		while (argv[g_i][j])
		{
			if (argv[g_i][j] != ' ')
			{
				temp[k] = argv[g_i][j];
				k++;
			}
			j++;
		}
		temp[j] = '\0';
		to_minuscule(temp);
		if (find_alert(temp) == 1)
			g_i = argc - 1;
		g_i++;
	}
	return (0);
}
