NAME = libft.a
SRC = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
INC = ./includes/

OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rc 

all: $(NAME)

.c.o:
	gcc ${CFLAGS} -c -I ${INC} $< -o ${<:.c=.o}

$(NAME): $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
