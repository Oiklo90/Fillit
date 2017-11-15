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

NAME = libft.a

SRC = SRCS/ft_atoi.c \
		SRCS/ft_bzero.c \
		SRCS/ft_isalnum.c \
		SRCS/ft_isalpha.c \
		SRCS/ft_isascii.c \
		SRCS/ft_isdigit.c \
		SRCS/ft_isprint.c \
		SRCS/ft_isspace.c \
		SRCS/ft_itoa.c \
		SRCS/ft_lstadd.c \
		SRCS/ft_lstdel.c \
		SRCS/ft_lstdelone.c \
		SRCS/ft_lstiter.c \
		SRCS/ft_lstmap.c \
		SRCS/ft_lstnew.c \
		SRCS/ft_memalloc.c \
		SRCS/ft_memccpy.c \
		SRCS/ft_memchr.c \
		SRCS/ft_memcmp.c \
		SRCS/ft_memcpy.c \
		SRCS/ft_memdel.c \
		SRCS/ft_memmove.c \
		SRCS/ft_memset.c \
		SRCS/ft_putchar_fd.c \
		SRCS/ft_putchar.c \
		SRCS/ft_putendl_fd.c \
		SRCS/ft_putendl.c \
		SRCS/ft_putnbr_fd.c \
		SRCS/ft_putnbr.c \
		SRCS/ft_putstr_fd.c \
		SRCS/ft_putstr.c \
		SRCS/ft_strcat.c \
		SRCS/ft_strchr.c \
		SRCS/ft_strclr.c \
		SRCS/ft_strcmp.c \
		SRCS/ft_strcpy.c \
		SRCS/ft_strdel.c \
		SRCS/ft_strdup.c \
		SRCS/ft_strequ.c \
		SRCS/ft_striter.c \
		SRCS/ft_striteri.c \
		SRCS/ft_strjoin.c \
		SRCS/ft_strlcat.c \
		SRCS/ft_strlen.c \
		SRCS/ft_strmap.c \
		SRCS/ft_strmapi.c \
		SRCS/ft_strncat.c \
		SRCS/ft_strncmp.c \
		SRCS/ft_strncpy.c \
		SRCS/ft_strnequ.c \
		SRCS/ft_strnew.c \
		SRCS/ft_strnstr.c \
		SRCS/ft_strrchr.c \
		SRCS/ft_strsplit.c \
		SRCS/ft_strstr.c \
		SRCS/ft_strsub.c \
		SRCS/ft_strtrim.c \
		SRCS/ft_tolower.c \
		SRCS/ft_toupper.c

OBJ = $(SRC:.c=.o)

INC = libft.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(OBJ): %.o: %.c
	@gcc -o $@ -c $< -I $(INC)

$(NAME): $(OBJ)
	@#@gcc $(FLAGS) -c $(SRC) -I $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32;1;4mLibft is ready, let's go baby!\033[0m"

clean:
	@/bin/rm -f $(OBJ)
	@/bin/rm -f $(OBJ)
	@/bin/rm -f */*~
	@/bin/rm -f */#*#
	@/bin/rm -f */a.out
	@#echo "\033[4;31mall unexpected files and .o are removed\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@#echo "\033[44;4m$(NAME) is deleted\033[0m"

re: fclean all

.PHONY: all clean fclean re	
