/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/19 11:25:09 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/19 11:25:49 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort(int *tab, int size)
{
	int c;
	int d;
	int varaux;

	c = 0;
	d = 0;
	while (c < size)
	{
		while (d < size)
		{
			if (*(tab + c) < *(tab + d))
			{
				varaux = *(tab + c);
				*(tab + c) = *(tab + d);
				*(tab + d) = varaux;
			}
			d++;
		}
		c++;
		d = 0;
	}
}

int		ft_bouton(int i, int j, int k)
{
	int	button_array[3];

	button_array[0] = i;
	button_array[1] = j;
	button_array[2] = k;
	sort(button_array, 3);
	return (button_array[1]);
}
