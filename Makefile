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

SRC = SRCS/libft/ft_atoi.c \
		SRCS/libft/ft_bzero.c \
		SRCS/libft/ft_isalnum.c \
		SRCS/libft/ft_isalpha.c \
		SRCS/libft/ft_isascii.c \
		SRCS/libft/ft_isdigit.c \
		SRCS/libft/ft_isprint.c \
		SRCS/libft/ft_isspace.c \
		SRCS/libft/ft_itoa.c \
		SRCS/libft/ft_lstadd.c \
		SRCS/libft/ft_lstdel.c \
		SRCS/libft/ft_lstdelone.c \
		SRCS/libft/ft_lstiter.c \
		SRCS/libft/ft_lstmap.c \
		SRCS/libft/ft_lstnew.c \
		SRCS/libft/ft_memalloc.c \
		SRCS/libft/ft_memccpy.c \
		SRCS/libft/ft_memchr.c \
		SRCS/libft/ft_memcmp.c \
		SRCS/libft/ft_memcpy.c \
		SRCS/libft/ft_memdel.c \
		SRCS/libft/ft_memmove.c \
		SRCS/libft/ft_memset.c \
		SRCS/libft/ft_putchar_fd.c \
		SRCS/libft/ft_putchar.c \
		SRCS/libft/ft_putendl_fd.c \
		SRCS/libft/ft_putendl.c \
		SRCS/libft/ft_putnbr_fd.c \
		SRCS/libft/ft_putnbr.c \
		SRCS/libft/ft_putstr_fd.c \
		SRCS/libft/ft_putstr.c \
		SRCS/libft/ft_strcat.c \
		SRCS/libft/ft_strchr.c \
		SRCS/libft/ft_strclr.c \
		SRCS/libft/ft_strcmp.c \
		SRCS/libft/ft_strcpy.c \
		SRCS/libft/ft_strdel.c \
		SRCS/libft/ft_strdup.c \
		SRCS/libft/ft_strequ.c \
		SRCS/libft/ft_striter.c \
		SRCS/libft/ft_striteri.c \
		SRCS/libft/ft_strjoin.c \
		SRCS/libft/ft_strlcat.c \
		SRCS/libft/ft_strlen.c \
		SRCS/libft/ft_strmap.c \
		SRCS/libft/ft_strmapi.c \
		SRCS/libft/ft_strncat.c \
		SRCS/libft/ft_strncmp.c \
		SRCS/libft/ft_strncpy.c \
		SRCS/libft/ft_strnequ.c \
		SRCS/libft/ft_strnew.c \
		SRCS/libft/ft_strnstr.c \
		SRCS/libft/ft_strrchr.c \
		SRCS/libft/ft_strsplit.c \
		SRCS/libft/ft_strstr.c \
		SRCS/libft/ft_strsub.c \
		SRCS/libft/ft_strtrim.c \
		SRCS/libft/ft_tolower.c \
		SRCS/libft/ft_toupper.c

OBJ = $(SRC:.c=.o)

INC = INCLUDES/libft.h

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