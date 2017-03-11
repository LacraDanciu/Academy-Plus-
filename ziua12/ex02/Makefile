# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/18 10:38:14 by ddanciu           #+#    #+#              #
#    Updated: 2014/09/18 10:38:38 by ddanciu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC = ft_tail.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
			gcc -o $(NAME) ft_tail.o

clean:
		/bin/rm -f ft_tail.o

fclean:
		/bin/rm -f $(NAME)

re:
		fclean all
