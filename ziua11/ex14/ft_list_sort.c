/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 20:25:24 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/17 20:25:42 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int g_num_nodes;
int g_counter;
t_list *g_current;
t_list *g_next;
t_list *g_previous;

int		ft_list_size(t_list *begin_list)
{
	t_list	*ptr;
	int		size;

	size = 0;
	ptr = begin_list;
	if (ptr)
	{
		while (ptr)
		{
			size++;
			ptr = ptr->next;
		}
	}
	return (size);
}

void	init(void)
{
	g_current->next = g_next->next;
	g_next->next = g_current;
	g_previous = g_next;
	g_next = g_current->next;
}

void	init2(void)
{
	g_previous = g_current;
	g_current = g_current->next;
	g_next = g_current->next;
}

void	ft_list_sort(t_list **head, int(*cmp)())
{
	g_num_nodes = ft_list_size(*head);
	g_counter = 0;
	while (g_counter < g_num_nodes)
	{
		g_current = *head;
		g_next = g_current->next;
		g_previous = NULL;
		while (g_next != NULL)
		{
			if ((*cmp)(g_current->data, g_next->data) > 0)
			{
				if (g_current == *head)
					*head = g_next;
				else
					g_previous->next = g_next;
				init();
			}
			else
				init2();
		}
		g_counter++;
	}
}
