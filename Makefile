# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 02:20:48 by iraqi             #+#    #+#              #
#    Updated: 2021/11/15 01:15:56 by iraqi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = libft.a
CC 	   = gcc
CFLAGS = -Werror -Wall -Wextra
SRC = $(wildcard *.c) 
OBJS = $(SRC:.c=.o) 



all:$(NAME)

clean :
	rm -f *.o libft.a
	
fclean :
	rm -f *.o $(NAME) 

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

re: clean all