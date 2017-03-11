/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 09:42:39 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/11 14:48:20 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = argc;
	i = 0;
	while (*(argv[0] + i) != '\0')
	{
		ft_putchar(*(argv[0] + i));
		i++;
	}
	ft_putchar('\n');
	return (0);
}
