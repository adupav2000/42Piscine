C_FILES = ft_cat.c
O_FILES = ${C_FILES:.c=.o}
NAME = ft_cat
CC = gcc -Wall -Werror -Wextra

all: sec_comp
	${CC} ${O_FILES} -o ${NAME}

sec_comp: ${C_FILES}
	${CC}  -c ${C_FILES}

clean:
	rm -f *.o

fclean: clean 
	rm -f ft_cat

re: fclean all