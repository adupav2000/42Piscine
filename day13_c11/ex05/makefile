NAME = do-op
INCLUDES = includes/
CC_FLAGS = gcc -Wall -Werror -Wextra 
SRCS    = ./srcs/atoi.c ./srcs/ft_strlen.c ./srcs/functions.c ./srcs/op_functions.c
OBJS    = ${SRCS:.c=.o}

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC_FLAGS) -I./${INCLUDES} -o $(NAME)  ${SRCS}



clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all