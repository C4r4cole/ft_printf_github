# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/26 11:07:46 by fmoulin           #+#    #+#              #
#    Updated: 2025/05/13 20:04:42 by fmoulin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRC_DIR1 = ../libft

SRCS	= $(wildcard $(SRC_DIR1)/*.c) ft_printf.c

INC = ${SRC_DIR1}/libft.h

OBJS	= ${SRCS:.c=.o}

CC	= cc

AR 	= ar -rc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror -g3

.c.o:
		${CC} ${CFLAGS} -I ${INC} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
		${AR} -o ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean
		make

.PHONY:		all clean fclean re bonus
