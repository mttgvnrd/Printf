# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 15:28:06 by mgiovana          #+#    #+#              #
#    Updated: 2022/11/10 11:19:43 by mgiovana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_countdec.c ft_print_hex1.c  ft_print_pointer.c ft_putchar_fd.c\
ft_counthex.c ft_print_hex.c ft_print_str.c ft_putnbr_fd.c\
ft_printchar.c ft_print_int.c ft_print_unsigned_int.c ft_putstr_fd.c\
ft_printf.c ft_ft.c ft_put_unsigned_nbr_fd.c ft_count_unsigned_dec.c

OBJS = ${SRCS:.c=.o}

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:    ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:             fclean all
