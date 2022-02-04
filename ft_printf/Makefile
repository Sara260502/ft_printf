# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szicchie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 13:08:59 by szicchie          #+#    #+#              #
#    Updated: 2022/02/04 13:09:01 by szicchie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

CC = gcc

CFLAGS = -c -Wextra -Werror -Wall

.c.o : $(CC) $(CFLAG) -c $<

SRCS = $(wildcard *.c)

BINS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(BINS)
	ar rcs $(NAME) $(BINS)

clean :
	rm -f $(BINS)
	
fclean : clean
	rm -f $(NAME)
	
re : fclean all

