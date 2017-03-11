/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 15:01:59 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/17 15:02:12 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	t_list *list;

	list = begin_list;
	while (list)
	{
		if (!list->next)
			return (list);
		list = list->next;
	}
	return (0);
}
