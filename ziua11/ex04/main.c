/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 09:27:20 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/22 18:40:50 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
t_list *ft_list_last(t_list *begin_list);
void	print_list(t_list *list);
void    ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
t_list	*ft_create_elem(void *data);
int	main(void)
{
	t_list *aux;

	aux = ft_create_elem("toto\n");
	print_list(ft_list_last(aux));
	return (0);
}
