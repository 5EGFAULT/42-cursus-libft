# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asouinia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 12:30:34 by asouinia          #+#    #+#              #
#    Updated: 2021/11/03 13:01:56 by asouinia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN			:= ./bin
TEST_DIR	:= ./tests
NAME		:= libft
SRC			:= $(wildcard *.c)
OBJ			:= $(patsubst %.c,%.o,$(SRC))
FLAGS		:= -Wall -Wextra -Werror
.PHONY		:  all clean fclean re

CURRENT_FN_TEST	:=	ft_isalpha

all: $(NAME)

$(NAME):  $(BIN)$(OBJ)
	@gcc $(FLAGS) $(BIN)$(OBJ)	-o $(NAME)
$(BIN)%.o:%.c  $(BIN)
	@gcc $(FLAGS) -c $< -o $@
$(BIN):
	@mkdir $@
clean:
	@rm -fd $(BIN)
fclean: clean

re: fclean all

test:

