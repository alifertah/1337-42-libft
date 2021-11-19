# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alfertah <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 12:50:14 by alfertah          #+#    #+#              #
#    Updated: 2021/11/11 03:15:11 by alfertah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
LDFLAGS=-L.
LDLIBS=-lft
SRC = ft_isalpha.c    ft_memchr.c     ft_putchar_fd.c ft_strdup.c     ft_strlen.c     ft_strtrim.c \
ft_atoi.c       ft_isascii.c    ft_memcmp.c     ft_putendl_fd.c ft_striteri.c   ft_strmapi.c    ft_substr.c  \
ft_bzero.c      ft_isdigit.c    ft_memcpy.c     ft_putstr_fd.c  ft_strjoin.c    ft_strncmp.c    ft_tolower.c \
ft_calloc.c     ft_isprint.c    ft_memmove.c    ft_split.c      ft_strlcat.c    ft_strnstr.c    ft_toupper.c \
ft_isalnum.c    ft_itoa.c       ft_memset.c     ft_strchr.c     ft_strlcpy.c    ft_strrchr.c	ft_itoa.c
OBJ = $(SRC:.c=.o)
INC = ./inc/

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o: %.c
		$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean clean
