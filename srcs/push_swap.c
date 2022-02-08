#include "../includes/push_swap.h"

void	sort_three(t_list **stack_a)
{
	int	a[3];
	int	i;

	i = 0;
	while (*stack_a)
	{
		a[i] = (*stack_a)->content;
		*stack_a = (*stack_a)->next;
	}
	if	((*stack_a)->content > (*stack_a)->next->content > )
	{


	}

}

static void	small_sort(int argc, t_list **stack_a, t_list **stack_b)
/* will determine which small_sort function to call */
{
	if (argc == 1)
		return ;
	if (argc == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			sa(stack_a, true);
	}
	else if (argc == 3)
		sort_three(stack_a);
}

static void	sort_large(int	argc, t_list **stack_a, t_list	**stack_b)
{


}

int		main(int argc, char **argv)
{
	t_list **stack_a;
	t_list **stack_b;
	t_list *new;
	int i;

	stack_a = NULL;
	stack_b = NULL;
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
		if (argc < 4)
			small_sort(argc, stack_a, stack_b);
		else
			sort_large(stack_a, stack_b, argc);
}