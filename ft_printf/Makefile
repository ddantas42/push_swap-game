# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 10:29:01 by ddantas-          #+#    #+#              #
#    Updated: 2022/08/08 14:32:31 by ddantas-         ###   ########.fr        #		
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

FILESC = ft_printf.c \
		ft_printf_utils.c \
		ft_printf_functions.c \
		ft_printf_functions_2.c \

FILES0 = $(FILESC:.c=.o)

all: $(NAME)

$(NAME): $(FILES0)
	ar rc $(NAME) $(FILES0)

clean:
	rm -f *.o

fclean: clean
	rm -f libftprintf.a

re: fclean all

.PHONY: all clean fclean re