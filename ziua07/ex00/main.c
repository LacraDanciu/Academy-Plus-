/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 11:11:05 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/12 11:21:40 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char 	*ft_strdup(char *src);

int main(void)
{
	char *aux;

	aux = "blafjhfghjdfgsdfyew ftuyey trehg ";
	printf("%s", ft_strdup(aux));
	return (0);
}
