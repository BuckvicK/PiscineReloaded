# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krakharo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 13:00:37 by krakharo          #+#    #+#              #
#    Updated: 2018/11/20 13:00:38 by krakharo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCSDIR = srcs/
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
HEADDIR = includes/
HEAD = $(wildcard $(HEADDIR)*.h)
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Werror -Wextra -I $(HEADDIR)

vpath %.c $(SRCSDIR)

all: $(NAME)

$(NAME): $(HEAD) $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	gcc -c $< $(FLAGS) -o $@

clean:
	rm -rf $(SRCS:.c=.o)

fclean: clean
	rm -rf $(NAME)

re: fclean all