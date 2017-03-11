/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 13:35:23 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/17 15:04:44 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *temp;

	temp = *begin_list;
	if (temp)
	{
		temp = ft_create_elem(data);
		temp->next = *begin_list;
		*begin_list = temp;
	}
	else
		*begin_list = ft_create_elem(data);
}

t_list		*ft_list_push_params(int ac, char **av)
{
	int			i;
	t_list		*begin_list;

	begin_list = NULL;
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&begin_list, *(av + i));
		i++;
	}
	return (begin_list);
}
