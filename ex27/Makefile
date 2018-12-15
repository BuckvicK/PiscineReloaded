# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krakharo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 15:16:04 by krakharo          #+#    #+#              #
#    Updated: 2018/11/20 15:23:13 by krakharo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = main.c ft_putchar.c ft_putstr.c ft_display_file.c
FLAGS = -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME): $(SRCS:.c=.o)
	gcc $(SRCS:.c=.o) -o $(NAME)

vpath %.c .

%.o: %.c
	gcc $(FLAGS) $<

vpath %.c .

clean:
	rm -rf $(SRCS:.c=.o)

fclean: clean
	rm -rf $(NAME)

re: fclean all
