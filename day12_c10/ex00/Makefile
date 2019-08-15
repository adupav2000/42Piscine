CC = gcc 
CFLAGS = -Wall -Werror -Wextra 
FILE_NAME = ft_display_file
FILES_SRCS = ft_read_files.c
FILES_OBJ = ${FILES_SRCS:.c=.o}

all: secure_comp
	

secure_comp:	${FILES_SRCS}
	${CC} ${CFLAGS} -c ${FILES_SRCS}
clean: 
	rm -f *.o
fclean:
	rm -f ${FILE_NAME}
	rm -f *.o