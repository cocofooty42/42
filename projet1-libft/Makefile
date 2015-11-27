# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgirard <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 16:40:04 by cgirard           #+#    #+#              #
#    Updated: 2015/11/26 14:33:46 by cgirard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_isprint.c\
	ft_rot42.c\
	ft_strnstr.c\
	ft_isupper.c\
	ft_strcat.c\
	ft_strrchr.c\
	ft_memccpy.c\
	ft_strchr.c\
	ft_strstr.c\
	ft_atoi.c\
	ft_memchr.c\
	ft_strcmp.c\
	ft_strupcase.c\
	ft_bzero.c\
	ft_memcmp.c\
	ft_strcpy.c\
	ft_swap.c\
	ft_capitalize.c\
   	ft_memcpy.c\
	ft_strdup.c\
	ft_tolower.c\
	ft_isalnum.c\
	ft_memmove.c\
	ft_strlcat.c\
	ft_toupper.c\
	ft_isalpha.c\
	ft_memset.c\
	ft_strlen.c\
	ft_isascii.c\
	ft_putchar.c\
 	ft_strncat.c\
	ft_isdigit.c\
	ft_putnbr.c\
	ft_strncmp.c\
	ft_islower.c\
	ft_putstr.c\
	ft_strncpy.c

OBJ = ft_isprint.o\
	ft_rot42.o\
	ft_strnstr.o\
	ft_isupper.o\
	ft_strcat.o\
	ft_strrchr.o\
	ft_memccpy.o\
	ft_strchr.o\
	ft_strstr.o\
	ft_atoi.o\
	ft_memchr.o\
	ft_strcmp.o\
	ft_strupcase.o\
	ft_bzero.o\
	ft_memcmp.o\
	ft_strcpy.o\
	ft_swap.o\
	ft_capitalize.o\
   	ft_memcpy.o\
	ft_strdup.o\
	ft_tolower.o\
	ft_isalnum.o\
	ft_memmove.o\
	ft_strlcat.o\
	ft_toupper.o\
	ft_isalpha.o\
	ft_memset.o\
	ft_strlen.o\
	ft_isascii.o\
	ft_putchar.o\
 	ft_strncat.o\
	ft_isdigit.o\
	ft_putnbr.o\
	ft_strncmp.o\
	ft_islower.o\
	ft_putstr.o\
	ft_strncpy.o

CFLAGS = -Wall -Wextra -Werror

CFLAGS2 = -std=c99

all: $(NAME)
	
$(NAME):	
	@gcc -c $(CFLAGS) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re:	fclean all
