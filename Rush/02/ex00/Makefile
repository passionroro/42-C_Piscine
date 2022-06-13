# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umerat <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/16 13:32:39 by umerat            #+#    #+#              #
#    Updated: 2021/08/17 10:10:54 by umerat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC= functions.c dictofill.c lookup.c recursive.c charmerge.c ft_itoalong.c writenumbers.c 

SRCFILES= ${addprefix ${PRE}, ${SRC}}

OBJS= ${SRCFILES:.c=.o}

PRE			= 

HEAD		= 

NAME		= rush-02

AR			= ar rc

RM			= rm -f

LIB			= ranlib

GCC			= gcc

FLAGS		= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${GCC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${GCC} ${FLAGS} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			$(RM) ${NAME}

re:			fclean all

.PHONY:		all clean fclean re


