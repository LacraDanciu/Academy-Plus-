/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/19 11:06:57 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/19 11:51:09 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_PERSO_H
# define FT_FT_PERSO_H
# include <string.h>
# define SAVE_AUSTIN_POWERS "warrior"

typedef struct	s_perso
{
	char	*name;
	double	life;
	int		age;
	char	*profession;
}				t_perso;
#endif
