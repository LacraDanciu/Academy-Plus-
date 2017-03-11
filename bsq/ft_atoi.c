/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 09:09:30 by mmomeu            #+#    #+#             */
/*   Updated: 2014/09/16 09:09:42 by mmomeu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		number(char c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int sign;
	int i;
	int rez;

	i = 0;
	rez = 0;
	sign = 1;
	while (*(str + i) == ' ')
		i++;
	if (*(str + i) == '-')
	{
		sign = -1;
		i++;
	}
	else if (*(str + i) == '+')
		i++;
	while ((number(*(str + i)) == 1))
	{
		rez = rez * 10 + (*(str + i) - 48);
		i++;
	}
	return (rez * sign);
}
