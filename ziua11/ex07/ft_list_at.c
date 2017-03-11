/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 17:56:31 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/17 17:56:35 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*ptr;

	if ((int)nbr > ft_list_size(begin_list))
		return (0);
	i = 0;
	ptr = begin_list;
	if (ptr)
	{
		while (i < nbr)
		{
			i++;
			ptr = ptr->next;
		}
	}
	return (ptr);
}
