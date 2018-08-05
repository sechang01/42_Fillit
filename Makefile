# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sechang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/24 19:47:08 by sechang           #+#    #+#              #
#    Updated: 2018/07/31 15:22:11 by sechang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
FLAGS = -Wall -Wextra -Werror
CC = gcc
OPTION = -c -I

SRC = fillit.c ft_error.c ft_blocksplit.c ft_blockxblock.c ft_idblock.c \
	ft_startsize.c ft_solve.c \
	ft_strsub.c ft_strlen.c ft_strtrim.c ft_strstr.c ft_strcmp.c \
	ft_strnew.c ft_bdot.c \
	ft_alpha.c ft_beta.c ft_gamma.c ft_delta.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SRC)
	$(CC) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
