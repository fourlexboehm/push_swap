NAME = push_swap
CFLAGS = -Wall -Wextra -Werror -g
SRCS = srcs/*.c
INCLUDES = ./includes/
LIBFT = ./libft/
LIBFT_A = ./libft/libft.a



all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT) bonus
	cp $(LIBFT_A) $(NAME)
	gcc $(CFLAGS) $(SRCS) $(LIBFT_A) -o $(NAME)

clean:
	make clean -C $(LIBFT)
	rm -rf $(OBJS)
	rm -rf ft_printf.o printf_utils.o hex.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

test:
	cc main.c -g $(SRCS) $(LIBFT_A)
	./a.out
