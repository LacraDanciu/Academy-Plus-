/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validare.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/23 09:02:08 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/23 16:45:55 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char g_valid;
char g_obs;
char g_repl;

int	ft_atoi(char *str);

void	first_chars(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\n')
		i++;
	i--;
	g_repl = src[i];
	g_obs = src[i - 1];
	g_valid = src[i - 2];
}

int	caractere(char c)
{
	if (c == g_valid || c == g_obs)
		return (1);
	return (0);
}

int	eroare(char *file, char *chars, int *l, int *c)
{
	int i;

	*l = ft_atoi(chars);
	i = 0;
	*c = 0;
	if (*l > 0)
	{
		while (file[i] != '\n' && caractere(file[i]) == 1)
			i++;
		*c = i++;
		while (file[i] != '\0')
		{
			while (file[i] != '\n' && caractere(file[i]) == 1)
				i++;
			if ((i - 1) % *c != 0)
			{
				write(2, "map error\n", 10);
				return (0);
			}
			i++;
		}
	}
	else
		return (0);
	return (1);
}

int	main(void)
{
	char *s1;
	char *s2;
	int		l;
	int c;

	s1 = "....o..\n.o.....\n....io\n\0";
	s2 = "3.ox\n";
	first_chars(s2);
	printf("%c\n%c\n%c\n", g_valid, g_obs, g_repl);
	printf("%d", eroare(s1, s2, &l, &c));
	return (0);
}
