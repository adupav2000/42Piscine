# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lothieve <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/08 11:37:59 by lothieve          #+#    #+#              #
#    Updated: 2019/08/18 13:44:53 by lothieve         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = parse.c ft_strncpy.c ft_strcat.c main.c list_utils.c ft_strndup.c ft_strlen.c print_num.c ft_putstr.c

OBJS = ${SRCS:.c=.o}

NAME = rush-02

CFLAGS = -Wall -Wextra -Werror

CC = clang

RM = rm -f

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				${CC} -o ${NAME} ${OBJS}

clean:
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
