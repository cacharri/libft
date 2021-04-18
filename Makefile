# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ialvarez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/06 18:00:35 by ialvarez          #+#    #+#              #
#    Updated: 2021/04/16 16:06:39 by ialvarez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_isalnum.c ft_isprint.c ft_memcpy.c ft_strlcat.c ft_atoi.c ft_isalpha.c \
		ft_memccpy.c ft_memmove.c ft_strlcpy.c ft_strrchr.c ft_bzero.c ft_isascii.c \
	   	ft_memchr.c ft_memset.c ft_strlen.c ft_tolower.c ft_isdigit.c ft_memcmp.c \
		ft_strchr.c	ft_strncmp.c ft_toupper.c ft_strnstr.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c
OBJS	= ${SRCS:.c=.o}

GCC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

${NAME}:	${SRCS}
			${GCC} -c ${CFLAGS} ${SRCS}
			ar -rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}

.PHONY:
			clean
			fclean
			all
			re
