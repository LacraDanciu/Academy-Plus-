/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/06 15:26:56 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/08 11:15:48 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strrev(char *str);

int		main()
{
	char bla[] = "paranoia";
	char *p;

	p = &(*bla);
	ft_strrev(p);
	printf("%s", bla);
	return (0);
}
