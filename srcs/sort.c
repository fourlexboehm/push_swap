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