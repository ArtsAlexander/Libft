# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarts <aarts@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/12 16:04:27 by aarts             #+#    #+#              #
#    Updated: 2021/05/12 18:59:42 by aarts            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC =	ft_bzero.c			\
		ft_memccpy.c 		\
		ft_memchr.c 		\
		ft_memcmp.c			\
		ft_memcpy.c 		\
		ft_memmove.c		\
		ft_memset.c 		\
		ft_strlcat.c		\
		ft_strlcpy.c 		\
		ft_strlen.c			\
		ft_strchr.c 		\
		ft_strrchr.c 		\
		ft_strnstr.c		\
		ft_strncmp.c 		\
		ft_atoi.c			\
		ft_itoa.c			\
		ft_calloc.c			\
		ft_isalnum.c 		\
		ft_isalpha.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_isprint.c		\
		ft_tolower.c		\
		ft_toupper.c		\
		ft_strdup.c			\
		ft_substr.c			\
		ft_strjoin.c		\
		ft_strtrim.c		\
		ft_strmapi.c		\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_split.c			\

BONUS = ft_lstadd_back.c	\
		ft_lstadd_front.c	\
		ft_lstclear.c		\
		ft_lstdelone.c		\
		ft_lstiter.c		\
		ft_lstlast.c		\
		ft_lstmap.c			\
		ft_lstnew.c			\
		ft_lstsize.c		\

OBJ = $(SRC:.c=.o)

B_OBJ = $(BONUS:.c=.o)

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRC) -I .
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		
all:	$(NAME)

clean:
		@rm -f $(OBJ) $(B_OBJ)

fclean:	clean
		@rm -f $(NAME)

re:		fclean all

bonus:
		@$(CC) $(CFLAGS) -c $(SRC) $(BONUS) -I .
		@ar rc $(NAME) $(OBJ) $(B_OBJ)
		@ranlib $(NAME)

.PHONY:	all clean fclean re bonus
