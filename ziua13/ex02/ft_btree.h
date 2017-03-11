/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/19 21:20:52 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/19 21:20:54 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef	struct s_btree	t_btree;
struct			s_btree
{
	t_btree		*left;
	t_btree		*right;
	void		*item;
};

void			btree_apply_infix(t_btree *root, void (*applyf)(void *));
#endif
