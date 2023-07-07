# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aulicna <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 21:49:14 by aulicna           #+#    #+#              #
#    Updated: 2022/11/03 21:55:19 by aulicna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
cc -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar rc libft.a *.o
rm ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
