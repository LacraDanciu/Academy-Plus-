/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 20:02:53 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/17 20:02:59 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref,
		int (*cmp)())
{
	t_list *ptr;

	ptr = begin_list;
	if (ptr)
	{
		while (ptr)
		{
			if ((*cmp)(data_ref, ptr->data) == 0)
				(*f)(ptr->data);
			ptr = ptr->next;
		}
	}
}
