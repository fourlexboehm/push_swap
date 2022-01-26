NAME = push_swap
CFLAGS = -g
#CFLAGS = -Wall -Wextra -Werror -g
SRCS = srcs/instructions1.c srcs/instructions2.c srcs/instructions3.c srcs/list.c srcs/push_swap.c srcs/sort.c srcs/sort_utils.c
INCLUDES = ./includes/
LIBFT = ./libft/
LIBFT_A = ./libft/libft.a



all: $(NAME)

libft: $(LIBFT)
	make -C $(LIBFT) bonus
	cp $(LIBFT_A) $(NAME)

$(NAME): $(OBJS) libft
	gcc $(CFLAGS) $(SRCS) $(LIBFT_A) -o $(NAME)
	./push_swap

clean:
	make clean -C $(LIBFT)
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

