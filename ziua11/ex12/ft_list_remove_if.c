/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 20:13:12 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/17 20:13:23 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
t_list	*prev(t_list *begin_list, t_list *ptr)
{
	t_list *lst;

	lst = begin_list;
	if (lst)
	{
		while (lst)
		{
			if (lst->next == ptr)
				return (lst);
			lst = lst->next;
		}
	}
	return (0);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *ptr;
	t_list *aux;

	ptr = *begin_list;
	while (ptr)
		if ((*cmp)(ptr->data, data_ref) == 0)
			if (ptr == *begin_list)
			{
				*begin_list = ptr->next, free(ptr);
				ptr = *begin_list;
			}
			else if (ptr->next == NULL)
			{
				aux = prev(*begin_list, ptr);
				aux->next = NULL, free(ptr);
				ptr = aux;
			}
			else
			{
				aux = prev(*begin_list, ptr);
				aux->next = ptr->next, free(ptr);
				ptr = aux->next;
			}
		else
			ptr = ptr->next;
}
