/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 14:41:54 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/16 20:29:10 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		operatori(char c);
void	ft_putstr(char *str);

int		operations(int *first, int second, char c)
{
	if (operatori(c) == 1)
		return (*first = *first + second);
	if (operatori(c) == 2)
		return (*first = *first - second);
	if (operatori(c) == 3)
		return (*first = *first * second);
	if (operatori(c) == 4 && second == 0)
		ft_putstr("Stop : division by zero");
	else if (operatori(c) == 4 && second != 0)
		return (*first = *first / second);
	if (operatori(c) == 5 && second == 0)
		ft_putstr("Stop : modulo by zero");
	else if (operatori(c) == 5 && second != 0)
	{
		if ((*first = *first % second) == 0)
			ft_putchar ('0');
		else
			return (*first = *first % second);
	}
	return (0);
}
