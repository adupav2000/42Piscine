FICHIER_SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
FICHIER_HDR = includes/
FICHIER_OBJS = ${FICHIER_SRC:.c=.o}
CFLAGS = -Wall -Werror -Wextra
CC= gcc
LIB= libstr.a

all: sec_comp
	ar rc ${LIB} ${FICHIER_OBJS}
	ranlib ${LIB}

sec_comp: ${FICHIER_OBJS}
		${CC} ${C FLAGS} -c ${FICHIER_SRC}
		mv *.o srcs/
clean:
	rm -f ${FICHIER_OBJS}

fclean: clean
	rm -f ${LIB}

re: fclean all

.PHONY: all fclean clean re