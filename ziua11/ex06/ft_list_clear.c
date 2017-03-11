/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 14:21:06 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/17 17:49:16 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *ptr;
	t_list *index;

	ptr = *begin_list;
	if (ptr)
	{
		index = ptr->next;
		while (index)
		{
			free(ptr);
			ptr = index;
			index = ptr->next;
		}
		*begin_list = NULL;
	}
}
