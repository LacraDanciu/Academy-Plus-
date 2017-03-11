/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 09:57:40 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/11 15:34:35 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (*(argv[j] + i) != '\0')
		{
			ft_putchar(*(argv[j] + i));
			i++;
		}
		j++;
		ft_putchar('\n');
	}
	return (0);
}
