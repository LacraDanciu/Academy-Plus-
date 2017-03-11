# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/16 08:52:18 by ddanciu           #+#    #+#              #
#    Updated: 2014/09/16 08:52:56 by ddanciu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
_SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = $(_SRCS:.c=.o)
	SRCS = $(patsubst %, srcs/%, $(_SRCS)) 

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror  $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
