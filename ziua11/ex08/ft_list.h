/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 09:14:05 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/17 19:29:14 by ddanciu          ###   ########.fr       */
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
#endif
