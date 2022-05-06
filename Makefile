.PHONY: all clean fclean re

TEST_LIST = 60 69 27 46 90 92 71 56 39 40 94 2 95 53 63 49 30 55 51 62 29 59 22 97 9 66 52 12 99 26 20 17 34 32 83 85 5 81 16 19 57 67 64 93 50 28 18 58 43 72 42 84 1 7 82 4 79 36 37 87 13 21 38 61 73 89 15 31 100 54 48 25 98 3 47 45 44 78 68 74 77 80 33 41 70 88 10 8 6 23 24 35 96 75 14 11 86 91 65 76

CC = gcc
CFLAGS = -g3 -Wall -Wextra -Werror

VALGRIND = valgrind --track-origins=yes --leak-check=full --show-leak-kinds=all -s

LIBFT = libs/libft/libft.a

NAME = push_swap
SRC_DIR = src
OBJ_DIR = objects
HEADER = $(SRC_DIR)/push_swap.h

NAME_BONUS = checker
SRC_DIR_BONUS = src_bonus
OBJ_DIR_BONUS = objects_bonus
HEADER_BONUS = $(SRC_DIR_BONUS)/checker.h

SRC_FILES	=	push_swap.c \

SRC_FILES	+=	utils/sort.c \
				utils/indexer.c \
				utils/check_args.c \
				utils/clear.c \
				utils/execute.c \
				utils/execute_n.c \
				utils/ft_close.c \
				utils/sort_two.c \
				utils/sort_three.c \
				utils/sort_few.c \
				utils/push_swap_init.c \
				utils/get_node_value.c \
				utils/is_cir_dlst_sorted.c \
				utils/print_ops_dlst.c \
				utils/get_target_index.c\
				utils/get_op.c\
				utils/improve_ops.c\
				sort_huge/sort_huge.c \
				sort_huge/sort_huge_util.c

SRC_FILES	+=	operations/sa.c \
				operations/sb.c \
				operations/ss.c \
				operations/pa.c \
				operations/pb.c \
				operations/ra.c \
				operations/rb.c \
				operations/rr.c \
				operations/rra.c \
				operations/rrb.c \
				operations/rrr.c

SRC_FILES_B	=	checker.c \
				utils/check_args.c \
				utils/execute.c \
				utils/set_null.c \
				utils/clear.c \
				utils/ft_close.c \
				utils/get_node_value.c \
				utils/create_lst.c \
				utils/get_ops_lst.c \
				utils/execute_ops.c \
				utils/check_sort.c \
				utils/is_cir_dlst_sorted.c

SRC_FILES_B	+=	operations/sa.c \
				operations/sb.c \
				operations/ss.c \
				operations/pa.c \
				operations/pb.c \
				operations/ra.c \
				operations/rb.c \
				operations/rr.c \
				operations/rra.c \
				operations/rrb.c \
				operations/rrr.c

SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

SRC_BONUS = $(addprefix $(SRC_DIR_BONUS)/, $(SRC_FILES_B))
OBJ_BONUS = $(SRC_BONUS:$(SRC_DIR_BONUS)/%.c=$(OBJ_DIR_BONUS)/%.o)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR_BONUS)/%.o: $(SRC_DIR_BONUS)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) $(HEADER)
	@make -C ./libs/libft
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)/utils
	mkdir -p $(OBJ_DIR)/sort_huge
	mkdir -p $(OBJ_DIR)/operations

clean:
	rm -rf objects objects_bonus

fclean:
	make  clean
	find -name '$(NAME)' -delete
	find -name '$(NAME_BONUS)' -delete

re:
	@make fclean && make all

test: all
	./$(NAME) $(TEST_LIST)

val: all
	make re
	$(VALGRIND) ./$(NAME) $(TEST_LIST)

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(OBJ_DIR_BONUS) $(OBJ_BONUS) $(HEADER_BONUS)
	@make -C ./libs/libft
	@$(CC) $(CFLAGS) $(OBJ_BONUS) -o $(NAME_BONUS) $(LIBFT)

$(OBJ_DIR_BONUS):
	mkdir -p $(OBJ_DIR_BONUS)/utils
	mkdir -p $(OBJ_DIR_BONUS)/operations

cleanb:
	@rm -rf $(OBJ_DIR_BONUS)

fcleanb:
	@make cleanb
	@find -name '$(NAME_BONUS)' -delete

reb:
	@make fcleanb && make $(NAME_BONUS)

test: $(NAME) $(NAME_BONUS)
	./$(NAME) $(TEST_LIST) | ./$(NAME_BONUS) $(TEST_LIST)
