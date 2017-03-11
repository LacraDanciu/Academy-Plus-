/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 20:07:20 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/17 20:07:23 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *ptr;

	ptr = begin_list;
	if (ptr)
	{
		while (ptr)
		{
			if ((*cmp)(ptr->data, data_ref) == 0)
				return (ptr);
			ptr = ptr->next;
		}
	}
	return (0);
}
