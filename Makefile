# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/25 17:53:15 by ashishae          #+#    #+#              #
#    Updated: 2019/11/26 15:24:21 by ashishae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_printf_string.c ft_printf_pointer.c ft_printf_hex.c\
ft_printf_integer.c ft_printf_uint.c ft_printf_char.c lft_lite.c lft_lite_fd.c\
ft_printf_format.c
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

.PHONY: 	clean fclean all re bonus

all:		$(NAME)

.c.o:
			gcc $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			ar -rc $(NAME) $(OBJS)
			ranlib $(NAME)

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re:			fclean all
