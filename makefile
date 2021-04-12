# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarts <aarts@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/12 16:04:27 by aarts             #+#    #+#              #
#    Updated: 2021/04/12 17:26:49 by aarts            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

FILES =	ft_bzero.c			\
		ft_memccpy.c 		\
		ft_memchr.c 		\
		ft_memcmp.c			\
		ft_memcpy.c 		\
		ft_memmove.c		\
		ft_memset.c 		\
		ft_strlcat.c		\
		ft_strlcpy.c 		\
		ft_strlen.c

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME):
		gcc $(CFLAGS) -c $(FILES)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)


clean:
		rm -f $(OBJ)

fclean:
		clean
		rm -f $(NAME)

re:
		fclean
		all