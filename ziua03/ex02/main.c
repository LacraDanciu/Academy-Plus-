/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/06 15:26:56 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/07 12:11:03 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void 	ft_putnbr(int nb);

void ft_div_mod(int a, int b, int *div, int *mod);

int		main()
{
	int a;
    int b;
	int p;
	int c;
    
	a = 35;
    b = 2;
	ft_div_mod(a, b, &p, &c);
	ft_putnbr(p);
	ft_putchar('\n');
    ft_putnbr(c);
	return (0);
}
