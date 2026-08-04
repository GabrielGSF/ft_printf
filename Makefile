# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdos-san <gdos-san@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/24 17:22:27 by gdos-san          #+#    #+#              #
#    Updated: 2026/08/04 18:49:07 by gdos-san         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./utils/ft_putchar.c \
       ./utils/ft_puthex.c \
       ./utils/ft_putnbr.c \
       ./utils/ft_putstr.c \
		ft_parse_format.c \
		ft_printf.c \

OBJS = $(SRCS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
