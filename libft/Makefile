# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/06 12:53:36 by lmnyamen          #+#    #+#              #
#    Updated: 2019/09/18 14:46:28 by lmnyamen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -c -Wall -Werror -Wextra
HEADER = libft.h
NAME = libft.a

.PHONY = clean fclean re
SRC = ft_isdigit.c ft_memcpy.c ft_putendl_fd.c ft_strclr.c ft_striteri.c\
	  ft_strncmp.c ft_strstr.c ft_isprint.c ft_memdel.c ft_putnbr.c\
	  ft_strcmp.c ft_strjoin.c ft_strncpy.c	ft_strsub.c ft_atoi.c ft_itoa.c\
	  ft_memmove.c ft_putnbr_fd.c ft_strcpy.c ft_strlcat.c ft_strnequ.c\
	  ft_strtrim.c ft_bzero.c ft_memalloc.c ft_memset.c ft_putstr.c\
	  ft_strdel.c ft_strlen.c ft_strnew.c ft_tolower.c ft_isalnum.c\
	  ft_memccpy.c ft_putchar.c ft_putstr_fd.c ft_strdup.c ft_strmap.c\
	  ft_strnstr.c ft_toupper.c ft_isalpha.c ft_memchr.c ft_putchar_fd.c \
	  ft_strcat.c ft_strequ.c ft_strmapi.c ft_strrchr.c ft_isascii.c\
	  ft_memcmp.c ft_putendl.c ft_strchr.c ft_striter.c ft_strncat.c\
	  ft_strsplit.c ft_swap.c ft_lstnew.c ft_lstadd.c ft_lst_print.c\
	  ft_lstsize.c ft_atol.c get_next_line.c ft_arraydel.c ft_array_join.c\
	  sort_int_tab.c ft_lstdel.c ft_lstdelone.c

OBJ = ft_isdigit.o ft_memcpy.o ft_putendl_fd.o ft_strclr.o ft_striteri.o\
	  ft_strncmp.o ft_strstr.o ft_isprint.o ft_memdel.o ft_putnbr.o\
	  ft_strcmp.o ft_strjoin.o ft_strncpy.o	ft_strsub.o ft_atoi.o ft_itoa.o\
	  ft_memmove.o ft_putnbr_fd.o ft_strcpy.o ft_strlcat.o ft_strnequ.o\
	  ft_strtrim.o ft_bzero.o ft_memalloc.o ft_memset.o ft_putstr.o\
	  ft_strdel.o ft_strlen.o ft_strnew.o ft_tolower.o ft_isalnum.o\
	  ft_memccpy.o ft_putchar.o ft_putstr_fd.o ft_strdup.o ft_strmap.o\
	  ft_strnstr.o ft_toupper.o ft_isalpha.o ft_memchr.o ft_putchar_fd.o\
	  ft_strcat.o ft_strequ.o ft_strmapi.o ft_strrchr.o ft_isascii.o\
	  ft_memcmp.o ft_putendl.o ft_strchr.o ft_striter.o ft_strncat.o\
	  ft_strsplit.o ft_swap.o ft_lstnew.o ft_lstadd.o ft_lst_print.o\
	  ft_lstsize.o ft_atol.o get_next_line.o ft_array_join.o ft_arraydel.o\
	  sort_int_tab.o ft_lstdel.o ft_lstdelone.o


all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean clean all

