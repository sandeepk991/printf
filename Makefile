# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skaur <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 10:01:21 by skaur             #+#    #+#              #
#    Updated: 2022/11/17 10:46:08 by skaur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a

SRCS =  ft_printf.c \
	ft_hexadecimal.c \
	ft_pointer.c \
	ft_putchar.c \
	ft_put_nbr.c \
	ft_putstr.c \
	ft_put_u_nbr.c

AR = ar rcs

CC = cc -c

CFLAGS = -Wall -Wextra -Werror

HEAD = printf.h

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME):	$(OBJS)
	@$(AR) $@ $(OBJS)
	@ranlib $@

$(OBJS):	$(SRCS)
	@$(CC) $(CFLAGS) $(SRCS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
