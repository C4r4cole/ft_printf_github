# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/26 11:07:46 by fmoulin           #+#    #+#              #
#    Updated: 2025/05/16 14:05:09 by fmoulin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
PROG	= a.out

LIBFT_DIR = ./libft
OBJ_DIR = ./objects

SRCS	= main.c ft_printf.c ft_is_c.c ft_is_s.c ft_is_p.c ft_is_d_i.c ft_is_u.c ft_is_lowerx.c \
		ft_is_upperx.c

INC = -I${LIBFT_DIR}

OBJS = ${addprefix ${OBJ_DIR}/, ${SRCS:.c=.o}}

CC	= cc
AR 	= ar -rc
RM	= rm -rf

CFLAGS	= -Wall -Wextra -Werror -g3 ${INC}

all: ${NAME} ${PROG}

${NAME} : ${OBJS}
	${MAKE} -C ${LIBFT_DIR}
	cp ${LIBFT_DIR}/libft.a ./
	mv libft.a ${NAME}
	${RM} ${LIBFT_DIR}/libft.a
	${AR} ${NAME} ${OBJS}

${PROG} : ${NAME}
	@${CC} ${CFLAGS} ${OBJS} -L. -lftprintf -o ${PROG}

${OBJ_DIR}/%.o: %.c | ${OBJ_DIR}
	${CC} ${CFLAGS} -c $< -o $@

${OBJ_DIR} :
	@mkdir -p ${OBJ_DIR}

clean:
	${RM} ${OBJ_DIR} ${LIBFT_DIR}/${OBJ_DIR}

fclean:		clean
		${RM} ${NAME}

re:	fclean all

go: all
	@./${PROG}
	@${RM} ${PROG}
 
.PHONY:		all clean fclean re go
