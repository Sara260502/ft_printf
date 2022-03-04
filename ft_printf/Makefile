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

RM = rm -f 

CFLAGS = -Wextra -Werror -Wall

SRCS = ft_printf.c ft_putad.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunsigned.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

all: $(NAME) 

$(NAME): $(OBJS)
				ar rcs $(NAME) $(OBJS)

clean: 
				$(RM) $(OBJS) $(BONUS_OBJS)
fclean:		clean
				$(RM) $(NAME)
re:				fclean $(NAME)

.PHONY = all clean fclean re 
