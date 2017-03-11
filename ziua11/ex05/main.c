/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 09:27:20 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/26 08:07:27 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
void	print_list(t_list *list);
void    ft_list_push_back(t_list **begin_list, void *data);
t_list	*ft_list_push_params(int ac, char **av);

int	main(int argc, char **argv)
{
	t_list *aux;
	print_list (ft_list_push_params(argc, argv));
	return (0);
}
