# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clagier <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/03 16:15:10 by clagier           #+#    #+#              #
#    Updated: 2019/04/03 16:51:58 by clagier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./srcs/ft_putchar.c\
		./srcs/ft_putstr.c\
		./srcs/ft_strcmp.c\
		./srcs/ft_strlen.c\
		./srcs/ft_swap.c

OBJECT = ft_putchar.o\
		ft_putstr.o\
		ft_strcmp.o\
		ft_strlen.o\
		ft_swap.o

CFLAGS = -Wall -Wextra -Werror

all:
	gcc $(CFLAGS) -c $(NAME) -I ./includes/header.h
	ar rc libft.a $(OBJECT) 

clean:
	rm $(OBJECT)

fclean: clean
	rm libft.a

re: fclean all
