/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 09:27:20 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/22 15:09:42 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
t_list	*ft_create_elem(char *data);
void	print_list(t_list *list);

int	main(void)
{
	t_list *list;

	list = ft_create_elem("toto\n");
	print_list(list);
	return (0);
}
