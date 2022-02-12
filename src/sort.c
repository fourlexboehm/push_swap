#include "../includes/push_swap.h"


void sort_halves(t_list **stack_a, t_list	**stack_b)
{
	Median	median;
	int l;
	int j;

	l = ft_lstsize(*stack_a);
	median = *find_median(stack_a, l);
	j = 1;
	while (j < l)
	{
		if ((*stack_a)->content < median.m)
			pb(stack_a, stack_b);
		else
			ra(stack_a, true);
		j++;
	}
	ft_small_pa(stack_a, stack_b);
	j = 0;
	while (j < 1/2 * l && ++j)
	{
		rra(stack_a, true);
		pb(stack_a, stack_b);
	}
	ft_small_pa(stack_a, stack_b);
}

void sort_quarters(t_list **stack_a, t_list	**stack_b)
{
	Median	median;
	int l;
	int j;

	l = ft_lstsize(*stack_a);
	median = *find_median(stack_a, l);
	j = 1;
	while (j < l)
	{
		if ((*stack_a)->content < median.s)
			pb(stack_a, stack_b);
		else
			ra(stack_a, true);
		j++;
	}
	ft_small_pa(stack_a, stack_b);
	j = 0;
	while (j < 3/4 * l && ++j)
	{
		rra(stack_a, true);
		if ((*stack_a)->content < median.m)
			pb(stack_a, stack_b);
	}
	ft_small_pa(stack_a, stack_b);
	while (j < 1/2 * l && ++j)
	{
		rra(stack_a, true);
		if ((*stack_a)->content < median.l)
			pb(stack_a, stack_b);
	}
	ft_small_pa(stack_a, stack_b);
	while (j < 1/4 * l && ++j)
	{
		rra(stack_a, true);
		pb(stack_a, stack_b);
	}
	ft_small_pa(stack_a, stack_b);
}