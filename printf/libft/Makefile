# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 16:00:31 by cd-haute          #+#    #+#              #
#    Updated: 2022/10/11 12:00:10 by cd-haute         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_isalpha.c srcs/ft_isdigit.c srcs/ft_isalnum.c srcs/ft_isascii.c srcs/ft_isprint.c srcs/ft_strlen.c srcs/ft_memset.c srcs/ft_bzero.c srcs/ft_memcpy.c srcs/ft_memmove.c srcs/ft_strlcpy.c srcs/ft_strlcat.c srcs/ft_toupper.c srcs/ft_tolower.c srcs/ft_strchr.c srcs/ft_strrchr.c srcs/ft_strncmp.c srcs/ft_memchr.c srcs/ft_memcmp.c srcs/ft_strnstr.c srcs/ft_atoi.c

BONUS = srcs/ft_lstnew.c srcs/ft_lstadd_front.c srcs/ft_lstsize.c srcs/ft_lstlast.c srcs/ft_lstadd_back.c srcs/ft_lstdelone.c srcs/ft_lstclear.c src/lstiter.c srcs/lstmap.c

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

.c.o:
	cc ${CFLAGS} -I include -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus: ${OBJS} ${OBJSBONUS}
	ar rcs ${NAME} ${OBJS} ${OBJSBONUS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: bonus all clean fclean re
