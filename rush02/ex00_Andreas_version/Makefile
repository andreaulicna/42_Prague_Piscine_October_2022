# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aulicna <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 16:55:44 by aulicna           #+#    #+#              #
#    Updated: 2022/10/30 19:05:49 by aulicna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SOURCES = main.c \
	  solve.c \
	  main_functions.c

OBJECTS = $(SOURCES:.c=.o)

CFLAGS += -Wall -Werror -Wextra

$(NAME): $(OBJECTS)
	cc -o $(NAME) $(SOURCES)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)
