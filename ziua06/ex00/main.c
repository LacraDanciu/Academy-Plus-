/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 08:31:09 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/11 08:43:29 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_strcmp(char *s1, char *s2);

int		ft_strlen(char *str);

void	ft_swap(int *a, int *b);

int 	main()
{
	char str1[] = "Hello";
	char str2[] = "MEow";
	char *p;
	char *d;

	p = str1;
	d = str2;
	ft_putstr(p);
	ft_putchar('\n');
	ft_strcmp(p, d);
	ft_putchar('\n');
	printf("%d",ft_strlen(p));
	return (0);
}
