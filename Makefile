# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 02:20:48 by iraqi             #+#    #+#              #
#    Updated: 2021/11/19 15:12:53 by iraqi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = libft.a
CC 	   = gcc
CFLAGS = -Werror -Wall -Wextra
SRC = $(wildcard *.c) 
OBJS = $(SRC:.c=.o) 

SRCB = ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c
OBJSB = $(SRCB:.c=.o) 

all:$(NAME)

bonus:$(OBJSB) all
	ar rc $(NAME) $(OBJSB)
	
clean :
	rm -f *.o libft.a
	
fclean :
	rm -f *.o $(NAME) 

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

re: clean all