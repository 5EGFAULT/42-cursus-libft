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

BIN			:= ./bin/
TEST_DIR	:= ./tests/
INCLUDE		:= ./
NAME		:= libft.a
SRC			:= $(wildcard *.c)
OBJ			:= $(patsubst %.c,%.o,$(SRC))
BINS		:= $(addprefix $(BIN),$(OBJ))
FLAGS		:= -Wall -Wextra -Werror -std=c99
.PHONY		:  all clean fclean re

CURRENT_FUN_TEST	:=	ft_strtrim.test.c

all: $(NAME)

$(NAME): $(BIN) $(BINS)
	@ar -rcs $(NAME) $(BINS)
$(BIN)%.o:%.c  $(BIN)
	@gcc $(FLAGS) -c $< -o $@ -I $(INCLUDE)
$(BIN):
	@mkdir $@
clean:
	@rm -fdr $(BIN)
fclean: clean
	@rm -f $(NAME)
re: fclean all

norm:
	@norminette $(SRC) libft.h

test: $(NAME)
	@gcc $(FLAGS)  $(TEST_DIR)$(CURRENT_FUN_TEST) -o test.o -I $(INCLUDE) -L. $(NAME)
	@./test.o