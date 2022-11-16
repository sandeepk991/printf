# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skaur <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 10:01:21 by skaur             #+#    #+#              #
#    Updated: 2022/11/01 13:13:20 by skaur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a

SRCS =  ft_printf.c \
		ft_printf_utils.c

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
