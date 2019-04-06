# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: linfan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/04 17:58:37 by linfan            #+#    #+#              #
#    Updated: 2019/04/06 13:11:32 by linfan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =./srcs/ft_putchar.c \
	 ./srcs/ft_putstr.c \
	 ./srcs/ft_strcmp.c \
	 ./srcs/ft_strlen.c \
	 ./srcs/ft_swap.c

INCLUDE =./includes/*.h

CC = gcc 

GFLAGS = -Wall -Wextra -Werror

OPTION = -c -I

OBJ = *.o

all: $(NAME)

$(NAME):
	$(CC) $(GFLAGS) $(OPTION) $(INCLUDE) $(SRC) 
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
