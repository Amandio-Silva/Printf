# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 14:25:05 by amsilva           #+#    #+#              #
#    Updated: 2024/11/22 15:26:20 by amsilva          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc 
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS =  ft_printchar.c ft_printstr.c ft_printf.c  ft_printhex.c ft_printnumb.c ft_printptr.c ft_printunnmb.c

OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all