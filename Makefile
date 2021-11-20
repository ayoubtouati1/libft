# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atouati <atouati@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 19:13:44 by atouati           #+#    #+#              #
#    Updated: 2021/11/19 22:19:15 by atouati          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memset.c ft_strchr.c \
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
		ft_toupper.c ft_calloc.c ft_strdup.c ft_strlcat.c ft_substr.c ft_strjoin.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

LIB	= ar -rc
CC	= cc
RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o :
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${LIB} ${NAME} ${OBJS}

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	clean re fclean
