# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cd-haute <cd-haute@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 17:58:33 by cd-haute          #+#    #+#              #
#    Updated: 2022/12/08 17:58:57 by cd-haute         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs

SRCS = $(addprefix $(SRC_DIR)/, \
ft_printf.c \
parser.c \
print_conversions.c \
print_c.c \
print_di.c \
print_p.c \
print_s.c \
print_u.c \
print_x.c \
nbr_printer.c \
char_printer.c \
prc_wdt_helper.c \
sign_prefix_helper.c)

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	make -C libft
	mv libft/libft.a libftprintf.a
	ar rcs $(NAME) $(OBJS)
	
$(addprefix $(SRC_DIR), $(OBJS)) : $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

bonus : all
	
clean :
	make -C libft fclean
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
