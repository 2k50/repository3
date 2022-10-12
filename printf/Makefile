# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 12:00:15 by cd-haute          #+#    #+#              #
#    Updated: 2022/10/12 11:08:57 by cd-haute         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = srcs/ft_print_hex.c srcs/ft_print_unsigned.c srcs/ft_print_ptr.c srcs/ft_printf.c srcs/ft_printf_utils.c

SRCS_MAKEFILE = libft/srcs/ft_isalpha.c libft/srcs/ft_isdigit.c libft/srcs/ft_isalnum.c libft/srcs/ft_isascii.c libft/srcs/ft_isprint.c libft/srcs/ft_strlen.c libft/srcs/ft_memset.c libft/srcs/ft_bzero.c libft/srcs/ft_memcpy.c libft/srcs/ft_memmove.c libft/srcs/ft_strlcpy.c libft/srcs/ft_strlcat.c libft/srcs/ft_toupper.c libft/srcs/ft_tolower.c libft/srcs/ft_strchr.c libft/srcs/ft_strrchr.c libft/srcs/ft_strncmp.c libft/srcs/ft_memchr.c libft/srcs/ft_memcmp.c libft/srcs/ft_strnstr.c srcs/ft_atoi.c

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror
.c.o:
	cc ${CFLAGS} -I include -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
