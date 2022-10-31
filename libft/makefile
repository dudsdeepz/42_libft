# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 20:18:20 by eduardo           #+#    #+#              #
#    Updated: 2022/10/31 14:29:55 by eduarodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	ft_strlcat.c\
		ft_atoi.c\
		ft_isascii.c\
		ft_memcpy.c\
		ft_bzero.c\
		ft_isdigit.c\
		ft_memmove.c\
		ft_calloc.c\
		ft_isprint.c\
		ft_memset.c\
		ft_strlen.c\
		ft_isalnum.c\
		ft_memchr.c\
		ft_strncmp.c\
		ft_isalpha.c\
		ft_memcmp.c\
		ft_strlcpy.c\
		ft_strnstr.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strdup.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_striteri.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	libft.a

CC	=	cc

SO	=	libft.so

RM	=	rm -f

CFLAGS	=	-Wall -Werror -Wextra -I.

.c: *.c
	$(CC) $(CFLAGS)-c - o $(SRC)

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rcs $(NAME) $(OBJ)

so:
	$(CC) -shared -o $(SO) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

soclean:	clean
		$(RM) $(OBJ) $(SO) $(NAME)

re:	fclean $(NAME)

.PHONY: all clean fclean re
