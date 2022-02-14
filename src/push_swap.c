#include "../includes/push_swap.h"

static void reverse(t_list **stack_a)
{
	ra(stack_a, 1);
	sa(stack_a, 1);
}

static void	sort3(t_list **stack_a)
/* this function will sort a stack_a by ascending order, smallest on top
** only works if there is 3 n */
{
	t_list	*temp;
	int		n[3];
	int		i;

	i = 0;
	temp = *stack_a;
	while (i < 3)
	{
		n[i] = temp->content;
		temp = temp->next;
		i++;
	}
	if (n[0] > n[1] && n[1] < n[2] && n[0] < n[2])
		sa(stack_a, 1);
	else if (n[0] < n[1] && n[1] > n[2] && n[0] > n[2])
		rra(stack_a, 1);
	else if (n[0] > n[1] && n[1] < n[2] && n[0] > n[2])
		ra(stack_a, 1);
	else if (n[0] > n[1] && n[1] > n[2])
		reverse(stack_a);
	else if (n[0] < n[1] && n[1] > n[2] && n[0] < n[2])
	{
		sa(stack_a, 1);
		ra(stack_a, 1);
	}
}


static void	small_sort(int argc, t_list **stack_a)
/* will determine which small_sort function to call */
{
	if (argc == 3)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			sa(stack_a, true);
	}
	else if (argc == 4)
		sort3(stack_a);
}


static void	ft_init_list(t_list **stack_a, char **argv)
{
	int		i;

	*stack_a = malloc(sizeof(t_list));
	if (!(*stack_a))
		return ;
	i = 1;
	(*stack_a)->content = ft_atoi(argv[i]);
	(*stack_a)->next = NULL;
	while (argv[++i])
	{
		ft_new_node(stack_a, ft_atoi(argv[i]));
	}
}

int		main(int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;
	int i;

	stack_b = NULL;
	i = 0;
	if (argc < 2)
	{
		ft_printf("Include n to be sorted as parameters.");
		return (0);
	}
	ft_error(argv);
	ft_init_list(&stack_a, argv);
	if (argc < 5)
		small_sort(argc, &stack_a);
	else if (argc < 15)
		sort_halves(&stack_a, &stack_b);
	else
		sort_quarters(&stack_a, &stack_b);
}