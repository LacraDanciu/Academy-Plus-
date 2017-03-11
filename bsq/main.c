/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/23 12:27:23 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/23 12:32:21 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void change(char **str)
{
	*(*str + 2) = '1';
}

int main(int argc, char **argv)
{
	(void)argc;
	char *s = (char *)malloc(10);
	s = argv[1];
	*s = '0';
	change(&s);
	printf("%s", s);
	return (0);

}
