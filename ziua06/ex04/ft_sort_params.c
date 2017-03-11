/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 10:39:14 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/11 13:21:19 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		comp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) == *(s2 + i))
	{
		i++;
		if (*(s1 + i) == *(s2 + i) && *(s1 + i) == '\0')
			return (0);
	}
	return (*(s1 + i) - *(s2 + i));
}

void	ft_print_params(char **str, int n)
{
	int i;
	int j;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (*(str[i] + j) != '\0')
		{
			ft_putchar(*(str[i] + j));
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*aux;
	int		j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (comp(*(argv + i), *(argv + j)) > 0)
			{
				aux = *(argv + i);
				*(argv + i) = *(argv + j);
				*(argv + j) = aux;
			}
			j++;
		}
		i++;
	}
	ft_print_params(argv, argc);
	return (0);
}
