/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 13:06:24 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/15 19:16:29 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_STOCK_PAR_H
# define FT_FT_STOCK_PAR_H
# include		<stdlib.h>
# include		<unistd.h>
typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;
char			**ft_split_whitespaces(char *str);
void			ft_show_tab(t_stock_par *par);
void			ft_putchar(char c);
#endif
