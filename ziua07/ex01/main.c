/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 11:11:05 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/12 12:51:54 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int *aux;
	int i;

	i = 0;
	aux = ft_range(3, 9);
	while (i < 6){

	printf("%d",aux[i]);
	i++;
	}
	return (0);
}
