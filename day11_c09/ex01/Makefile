SRCS    = ./srcs/ft_putchar.c \
          ./srcs/ft_putstr.c \
          ./srcs/ft_swap.c \
          ./srcs/ft_strlen.c \
          ./srcs/ft_strcmp.c
OBJS    = ${SRCS:.c=.o}
NAME    = libft.a
CC      = gcc
RM      = rm -f
HEADER  = includes/
CFLAGS  = -Wall -Wextra -Werror -I$(HEADER)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c $< -o $@ -I $(INC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
