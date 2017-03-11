/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/19 21:17:25 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/19 21:17:46 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void	*item)
{
	t_btree *new_nod;

	new_nod = NULL;
	new_nod = malloc(sizeof(t_btree));
	if (new_nod)
	{
		new_nod->left = 0;
		new_nod->right = 0;
		new_nod->item = item;
	}
	return (new_nod);
}
