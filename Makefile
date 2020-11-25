# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpowder <mpowder@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/27 12:48:01 by mpowder           #+#    #+#              #
#    Updated: 2020/11/25 03:51:26 by mpowder          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c ft_parsing.c ft_get_type.c ft_print_num.c \
			ft_print_unum.c ft_print_chr.c ft_print_str.c ft_print_p.c \
			ft_strchr.c ft_strlen.c

OBJS	= ${SRCS:.c=.o}

INC		= libftprintf.h

NAME	= libftprintf.a

CC		= gcc

AR		= ar rc

RANL	= ranlib

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I${INC} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS} ${INC}
			${AR} ${NAME} ${OBJS}
			${RANL} ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS} ${O_BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
