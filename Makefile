# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zhuwu <zhuwu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/25 14:38:18 by zhuwu             #+#    #+#              #
#    Updated: 2025/10/26 10:48:33 by zhuwu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_printchar.c ft_printstr.c ft_printnbr.c \
       ft_printunsigned.c ft_printptr.c ft_printhexs.c ft_printpercent.c\
	   ft_itoa.c ft_printhexb.c
	   

OBJS = $(SRCS:.c=.o)

CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -I.
LIB 	= ar rcs
NAME	= libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
