/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 10:26:58 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/11 10:28:33 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int j;
	int i;

	j = argc;
	while (j >= 2)
	{
		i = 0;
		j--;
		while (*(argv[j] + i) != '\0')
		{
			ft_putchar(*(argv[j] + i));
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
