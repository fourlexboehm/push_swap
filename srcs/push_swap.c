#include "../includes/push_swap.h"


static void	small_sort(int argc, t_list **stack_a, t_list **stack_b)
/* will determine which small_sort function to call */
{
	if (argc == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			sa(stack_a, true);
	}
	else if (argc == 3)
		ft_sort_three(stack_a);
	else if (argc == 4)
		ft_sort_four(stack_a, stack_b);
	else if (argc == 5)
		ft_sort_five(stack_a, stack_b);
}


static void	big_sort(int argc, t_list	**stack_a, t_list	**stack_b)
/* will sort if 5 < numbers >= 100
will not always work if less than 25 numbers */
{
	t_quart	*quart;

	quart = ft_calloc(1, sizeof(t_quart));
	ft_quarters(&quart, argc, stack_a);
	ft_first(argc, stack_a, stack_b, &quart);
	ft_second(argc, stack_a, stack_b, &quart);
	ft_third_small(argc, stack_a, stack_b, &quart);
	ft_last(argc, stack_a, stack_b);
	free(quart);
}

void	big_big_sort(int argc, t_list	**stack_a, t_list	**stack_b)
/* will sort if 100 < numbers */
{
	t_quart	*quart;

	quart = ft_calloc(1, sizeof(t_quart));
	ft_eigths(&quart, argc, stack_a);
	ft_first(argc, stack_a, stack_b, &quart);
	ft_second(argc, stack_a, stack_b, &quart);
	ft_third_big(argc, stack_a, stack_b, &quart);
	ft_fourth(argc, stack_a, stack_b, &quart);
	ft_fifth(argc, stack_a, stack_b, &quart);
	ft_sixth(argc, stack_a, stack_b, &quart);
	ft_seventh(argc, stack_a, stack_b, &quart);
	ft_last(argc, stack_a, stack_b);
	free(quart);
}

int main(int argc, char **argv)
{
	t_list **stack_a;
	t_list **stack_b;
	t_list *new;
	int i;

	stack_a = NULL;
	i = 0;
	if (argc < 2)
	{
		ft_printf("Include numbers to be sorted as parameters.");
		return (0);
	}
	while (argv[i])
	{
		new = ft_lstnew(ft_atoi(argv[i++]));
		ft_lstadd_front(stack_a, new);
		stack_a = &new;
	}
		if (argc <= 5)
			small_sort(argc, stack_a, stack_b);
		else if (argc <= 100)
			big_sort(argc, stack_a, stack_b);
		else
//			ft_big_big_sort(argc, stack_a, stack_a)
			ft_printf("Lulwut u want me to sort that?...");
}