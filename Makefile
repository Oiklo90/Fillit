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

NAME = Fillit

LIBFT = Libft/libft.a

SRC = SRCS/main.c \
		SRCS/errors.c \
		SRCS/ft_fillsolv.c \
		SRCS/ft_utilities.c \

OBJ = $(SRC:.c=.o)

INC = INCLUDES/fillit.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

%.o: %.c
	gcc -o $@ -c $< -I $(INC)

$(NAME): $(OBJ)
	#@gcc $(FLAGS) -c $(SRC) -I $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32;1;4mLibft is ready, let's go baby!\033[0m"

clean:
	@/bin/rm -f $(OBJ)
	@/bin/rm -f $(OBJ)
	@/bin/rm -f */*~
	@/bin/rm -f */#*#
	@/bin/rm -f */a.out
	@echo "\033[4;31mall unexpected files and .o are removed\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[44;4m$(NAME) is deleted\033[0m"

re: fclean all

.PHONY: all clean fclean re	