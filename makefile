NAME = push_swap
NAME2 = checker
CC = cc
FLAGS = -Wall -Werror -Wextra
SRC = push_swap.c push_swap_2.c error_msg.c check_args.c ft_split.c utils.c utils_2.c utils_3.c moves.c three_numbers.c four_numbers.c \
		five_numbers.c in_order.c sort_100.c push_to_a.c sort_500.c moves_2.c moves_3.c two_numbers.c utils_4.c \

BONUS_SRC = push_swap_bonus.c utils.c utils_2.c utils_3.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c moves_bonus.c check_args.c \
			ft_split.c error_msg.c in_order.c moves_bonus_2.c moves_bonus_3.c utils_4.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

bonus:$(NAME2)

$(NAME2):$(BONUS_OBJ)
	$(CC) $(FLAGS) $(BONUS_OBJ) -o $(NAME2)

%.o:%.c 
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf *.o
	rm -rf get_next_line/*.o

fclean:clean
	rm -rf $(NAME)
	rm -rf $(NAME2)

re:fclean all

.PHONY: all clean fclean re bonus