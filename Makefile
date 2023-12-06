# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carlos-m <carlos-m@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 18:55:38 by carlos-m          #+#    #+#              #
#    Updated: 2023/10/05 18:59:22 by carlos-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_numeros.c ft_hexadec.c ft_unsigned.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
.PHONY: all clean fclean re
all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
