/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 10:58:59 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/17 10:59:52 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_LIST_H
# define FT_FT_LIST_H
# include <stdlib.h>
typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;
t_list			*ft_create_elem(void *data);
#endif
