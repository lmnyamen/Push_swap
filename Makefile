# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/16 22:36:07 by lmnyamen          #+#    #+#              #
#    Updated: 2019/09/20 12:51:19 by lmnyamen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -c -I -Wall -Werror -Wextra
HEADER = push_swap.h
NAME = push_swaplib.a

SRC = check_param.c issorted.c ft_stack.c ft_push.c ft_swap_node.c ft_rotate.c\
	  ft_rev_rotate.c  ft_crr.c ft_css.c ft_crrr.c checker.c ft_p.c ft_pr.c\
	  ft_prr.c ft_rr.c ft_rrr.c ft_ss.c ft_pswap.c push_swap.c ft_five.c\
	  min_value.c min_pos.c plst_size.c sort.c ft_median.c half_stack.c\
	  max_value.c next_max.c max_pos.c rev_half.c next_min.c pos.c sort_three.c\
	  checker_main.c main.c ft_quartile.c quart_stack.c sort2.c plstdel.c\
	  lstprint.c

OBJ = check_param.o issorted.o ft_stack.o ft_push.o ft_swap_node.o ft_rotate.o\
	  ft_rev_rotate.o ft_css.o ft_crr.o ft_crrr.o checker.o ft_p.o ft_pr.o\
	  ft_prr.o ft_rr.o ft_rrr.o ft_ss.o ft_pswap.o push_swap.o ft_five.o\
	  min_value.o min_pos.o plst_size.o sort.o ft_median.o half_stack.o\
	  max_value.o next_max.o max_pos.o rev_half.o next_min.o pos.o sort_three.o\
	  checker_main.o main.o ft_quartile.o quart_stack.o sort2.o plstdel.o\
	  lstprint.o


all : $(NAME)

$(NAME):
	make -C libft
	gcc $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	gcc -Wall -Werror -Wextra main.c $(NAME) libft/libft.a -o push_swap
	gcc -Wall -Werror -Wextra checker_main.c $(NAME) libft/libft.a -o checker
	
clean :
	make clean -C libft
	rm -rf $(OBJ)


fclean : clean
	make fclean -C libft
	rm -rf $(NAME)
	rm -rf push_swap
	rm -rf checker

re : fclean clean all

.PHONY = clean fclean re
