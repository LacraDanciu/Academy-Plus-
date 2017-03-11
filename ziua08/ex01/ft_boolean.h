/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 08:54:20 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/15 08:57:52 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_BOOLEAN_H
# define FT_FT_BOOLEAN_H
# include <unistd.h>
# define EVEN_MSG "I have a pair number of arguments.\n"
# define ODD_MSG "I have an impair number of arguments.\n"
# define EVEN(x) x % 2 == 0
# define SUCCESS 0
typedef enum	e_bool
{
	FALSE,
	TRUE
}				t_bool;
#endif
