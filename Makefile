# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 02:20:48 by iraqi             #+#    #+#              #
#    Updated: 2021/11/20 09:04:20 by iraqi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = libft.a
CFLAGS = -Werror -Wall -Wextra
SRC = ft_isalpha.c\
		ft_toupper.c\
		ft_isdigit.c\
		ft_tolower.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memchr.c\
		ft_memcpy.c\
		ft_memcmp.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strnstr.c\
		ft_strlcat.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putnbr_fd.c\
		ft_putendl_fd.c
		 
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

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	
bonus: $(OBJSB) $(OBJS)
	ar rc $(NAME) $(OBJSB) $(OBJS)
	
clean :
	rm -f $(OBJS) $(OBJSB)
	
fclean :clean
	rm -f $(NAME)

%.o : %.c
	cc $(CFLAGS) -o $@ -c $<

re: clean all