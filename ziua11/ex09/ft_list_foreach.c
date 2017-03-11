/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 19:33:45 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/17 19:34:00 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void(*f)(void *))
{
	t_list *ptr;

	ptr = begin_list;
	if (ptr)
	{
		while (ptr)
		{
			(*f)(ptr->data);
			ptr = ptr->next;
		}
	}
}
