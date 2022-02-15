#include "../includes/push_swap.h"

static void second(t_list **stack_a, t_list **stack_b, Median *median);
static void third(t_list **stack_a, t_list **stack_b, Median *median);
static void fourth(t_list **stack_a, t_list **stack_b, Median *median);

void	sort_eighths(t_list **stack_a, t_list	**stack_b)
{
	Median	median;

	median = *find_median(stack_a, ft_lstsize(*stack_a));
	while ((*stack_a)->flag == 0)             //First eighth
	{
		if ((*stack_a)->content <= median.xs)
			pb(stack_a, stack_b);
		else if ((*stack_a)->flag == 0)
		{
			(*stack_a)->flag = -1;
			ra(stack_a, true);
		}
	}
	second(stack_a, stack_b, &median);
	third(stack_a, stack_b, &median);
	fourth(stack_a, stack_b, &median);
}

static void second(t_list **stack_a, t_list **stack_b, Median *median)
{
	while (*stack_b)
		ft_small_pa(stack_a, stack_b);
	while ((*stack_a)->flag < 1)              //second eighth
	{
		if ((*stack_a)->content <= (*median).s && (*stack_a)->flag < 1)
			pb(stack_a, stack_b);
		if ((*stack_a)->content > (*median).s)
			ra(stack_a, true);
	}
	while ((*stack_a)->flag == 1)
		ra(stack_a, true);
	while (*stack_b)
		ft_small_pa(stack_a, stack_b);
	while ((*stack_a)->flag < 1)              //third eighth
	{
		if ((*stack_a)->content <= (*median).sm && (*stack_a)->flag < 1)
			pb(stack_a, stack_b);
		if ((*stack_a)->content > (*median).sm)
			ra(stack_a, true);
	}
}

static void third(t_list **stack_a, t_list **stack_b, Median *median)
{
	while ((*stack_a)->flag == 1)
		ra(stack_a, true);
	while (*stack_b)
		ft_small_pa(stack_a, stack_b);
	while ((*stack_a)->flag < 1)              //fourth eighth
	{
		if ((*stack_a)->content <= (*median).m && (*stack_a)->flag < 1)
			pb(stack_a, stack_b);
		if ((*stack_a)->content > (*median).m)
			ra(stack_a, true);
	}
	while ((*stack_a)->flag == 1)
		ra(stack_a, true);
	while (*stack_b)
		ft_small_pa(stack_a, stack_b);
	while ((*stack_a)->flag < 1)              //fifth eighth
	{
		if ((*stack_a)->content <= (*median).ml && (*stack_a)->flag < 1)
			pb(stack_a, stack_b);
		if ((*stack_a)->content > (*median).ml)
			ra(stack_a, true);
	}
	while ((*stack_a)->flag == 1)
		ra(stack_a, true);
	while (*stack_b)
		ft_small_pa(stack_a, stack_b);
}

static void fourth(t_list **stack_a, t_list **stack_b, Median *median)
{
	while ((*stack_a)->flag < 1)			  //6th eighth
	{
		if ((*stack_a)->content <= (*median).l)
			pb(stack_a, stack_b);
		else if ((*stack_a)->flag < 1)
			ra(stack_a, true);
	}
	while (ft_lstlast(*stack_a)->flag < 1)
		rra(stack_a, true);
	while (*stack_b)
		ft_small_pa(stack_a, stack_b);
	while ((*stack_a)->flag < 1)			  //7th eighth
	{
		if ((*stack_a)->content <= (*median).xl)
			pb(stack_a, stack_b);
		else if ((*stack_a)->flag < 1)
			ra(stack_a, true);
	}
	while (ft_lstlast(*stack_a)->flag < 1)
		rra(stack_a, true);
	while (*stack_b)
		ft_small_pa(stack_a, stack_b);
	while ((*stack_a)->flag < 1)			//8th eighth
		pb(stack_a, stack_b);
	while (*stack_b)
		ft_small_pa(stack_a, stack_b);
}
