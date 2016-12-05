# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/29 16:05:24 by cfatrane          #+#    #+#              #
#*   Updated: 2016/12/05 19:14:21 by cfatrane         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC_PATH = srcs

SRC_NAME =	main.c		\
			ft_create_map.c

CPPFLAGS = -I includes/

LDFLAGS = -L./libft/

LDLIBS = -lft

CC = gcc -g

CFLAGS = -Wall -Wextra -Werror

OBJ_NAME = $(SRC_NAME:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_NAME)
	@make -C./libft/
	@$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) $^ -o $@

%.o: %.c
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $^

clean:
	@make clean -C ./libft/
	@rm -f $(OBJ_NAME)

fclean: clean
	@make fclean -C ./libft/
	@rm -f $(NAME)

re: fclean all

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h

.PHONY: all, clean, fclean, re
