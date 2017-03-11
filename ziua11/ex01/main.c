/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 09:27:20 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/22 15:49:59 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
void	print_list(t_list *list);
void    ft_list_push_back(t_list **begin_list, void *data);

int	main(void)
{
	t_list *aux;

	aux = ft_create_elem("toto\n");
	ft_list_push_back (&aux, "meow\n");
	print_list (aux);
	return (0);
}
