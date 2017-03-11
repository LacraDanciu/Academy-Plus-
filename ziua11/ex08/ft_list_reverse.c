/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 19:24:26 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/17 19:24:54 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
void ft_list_reverse(t_list **begin_list)
{
	t_list *ptr;
	t_list *aux;
	t_list *aux1;

	ptr = *begin_list;
	if (!ptr || !ptr->next)
		return ;
	aux = ptr->next;
	aux1 = aux->next;
	ptr->next = NULL;
	aux->next = ptr;
	while (aux1)
	{
		ptr = aux;
		aux = aux1;
		aux1 = aux1->next;
		aux->next = ptr;
	}
	*begin_list = aux;
}
