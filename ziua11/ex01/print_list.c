/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 09:32:20 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/17 10:13:18 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_putstr(char *str);

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr((char *)(list->data));
		list = list->next;
	}
}

