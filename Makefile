#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llonger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/15 16:41:58 by llonger           #+#    #+#              #
#    Updated: 2017/11/10 10:58:21 by llonger          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

SRC = main.c \
		errors.c \
		ft_fillsolv.c \
		ft_utilities.c \
		ft_settetri.c \
		ft_links.c

OBJ = $(SRC:.c=.o)

INC = -I INCLUDES

INCLFT = -I Libft/INCLUDES/libft.h

LIB = -L Libft/ -lft

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(OBJ): %.o: %.c
	@gcc $(FLAGS) $(INC) $(INCLFT) -c $< -o $@ 

$(NAME): $(OBJ)
	@#@gcc $(FLAGS) -c $(SRC) -I $(INC)
	@make -C Libft/ re
	@gcc -o $(NAME) $(OBJ) $(LIB)
	@echo "\033[35;1;4mFillit is ready. Can you Feel it?\033[0m"

clean:
	@make -C Libft/ clean
	@/bin/rm -f libft.a
	@/bin/rm -f $(OBJ)
	@/bin/rm -f $(OBJ)
	@/bin/rm -f */*~
	@/bin/rm -f */#*#
	@/bin/rm -f */a.out
	@echo "\033[4;31mall unexpected files and .o are removed\033[0m"

fclean: clean
	@make -C Libft/ fclean
	@/bin/rm -f $(NAME)
	@echo "\033[34;4m$(NAME) && libft.a are deleted\033[0m"

re: fclean all

.PHONY: all clean fclean re	