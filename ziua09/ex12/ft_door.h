/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/19 11:58:14 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/19 12:19:13 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_DOOR_H
# define FT_FT_DOOR_H
# include <unistd.h>

typedef int		t_ft_bool;
# define TRUE 1
# define OPEN 1
# define CLOSE 0
# define EXIT_SUCCESS 0
typedef struct	s_door
{
	int	state;
}				t_door;
t_ft_bool		open_door(t_door		*door);
t_ft_bool		close_door(t_door		*door);
t_ft_bool		is_door_open(t_door		*door);
t_ft_bool		is_door_close(t_door	*door);
#endif
