#include "../includes/push_swap.h"


void sort_halves(t_list **stack_a, t_list	**stack_b)
{
	Median	median;
	int l;

	l = ft_lstsize(*stack_a);
	median = *find_median(stack_a, l);
	while ((*stack_a)->flag == 0)
	{
		if ((*stack_a)->content <= median.m)
			pb(stack_a, stack_b);
		else if ((*stack_a)->flag == 0)
		{
			(*stack_a)->flag = -1;
			ra(stack_a, true);
		}
	}
	while (*stack_b)
		ft_small_pa(stack_a, stack_b);
	while ((*stack_a)->flag < 1)
		pb(stack_a, stack_b);
	while (*stack_b)
		ft_small_pa(stack_a, stack_b);
	while (ft_find_smallest(stack_a, (*stack_a)->content) > 0)
		rra(stack_a, true);
	//ft_find_smallest(stack_a, (while *stack));
}

void sort_quarters(t_list **stack_a, t_list	**stack_b)
{
	Median	median;
	int l;

	l = ft_lstsize(*stack_a);
	median = *find_median(stack_a, l);
	while ((*stack_a)->flag == 0)             //First quarter
	{
		if ((*stack_a)->content <= median.s)
			pb(stack_a, stack_b);
		else if ((*stack_a)->flag == 0)
		{
			(*stack_a)->flag = -1;
			ra(stack_a, true);
		}
	}
	while (*stack_b)
		ft_small_pa(stack_a, stack_b);
	while ((*stack_a)->flag < 1)              //second quarter
	{
		if ((*stack_a)->content <= median.m && (*stack_a)->flag < 1)
			pb(stack_a, stack_b);
		if ((*stack_a)->content > median.m)
			ra(stack_a, true);
	}
	while ((*stack_a)->flag == 1)
		ra(stack_a, true);
	while (*stack_b)
		ft_small_pa(stack_a, stack_b);
	while ((*stack_a)->flag < 1)			  //third quarter
	{
		if ((*stack_a)->content <= median.l)
			pb(stack_a, stack_b);
		else if ((*stack_a)->flag < 1)
			ra(stack_a, true);
	}
	while (ft_lstlast(*stack_a)->flag < 1)
		rra(stack_a, true);
	while (*stack_b)
		ft_small_pa(stack_a, stack_b);
	while ((*stack_a)->flag < 1)			//fourth quarter
		pb(stack_a, stack_b);
	while (*stack_b)
		ft_small_pa(stack_a, stack_b);
}