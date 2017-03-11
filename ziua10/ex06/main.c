/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 10:40:00 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/16 20:30:28 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		operatori(char c);
int		ft_atoi(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		operations(int *first, int second, char c);

int		main(int argc, char **argv)
{
	int first;
	int second;

	if (argc == 4)
	{
		first = ft_atoi(argv[1]);
		second = ft_atoi(argv[3]);
		if ((ft_strlen(argv[2]) == 1) && (operatori(argv[2][0]) != 0))
		{
			ft_putnbr(operations(&first, second, argv[2][0]));
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('0');
			ft_putchar('\n');
		}
	}
	return (0);
}
