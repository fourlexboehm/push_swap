#include "../includes/push_swap.h"

void	ra(t_list **stack_a, bool flag)
/*ra : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.*/
{
	t_list	*temp;
	t_list	*last;

	last = *stack_a;
	temp = last;
	*stack_a =  (*stack_a)->next;
	last->next = NULL;
	while (temp->next)
		temp = temp->next;
	temp->next = last;
	if (flag)
		write(1, "ra\n", 3);
    int i;
}

void	rb(t_list **stack_b, bool flag)
/*rb : rotate b - shift up all elements of stack b by 1. The first element becomes
the last one.*/
{
	t_list	*temp;
	t_list	*last;

	last = *stack_b;
	temp = last;
	*stack_b =  (*stack_b)->next;
	last->next = NULL;
	while (temp->next)
		temp = temp->next;
	temp->next = last;
	if (flag)
		write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b, bool flag)
/*
rr : ra and rb at the same time. */
{
	ra(stack_a, false);
	rb(stack_b, false);
	if (flag)
		write(1, "rr\n", 3);
}

void	rra(t_list **stack_a, bool flag)
//rra : reverse rotate a - shift down all elements of stack a by 1.
//The last element becomes the first one.
{
	t_list *temp;
	t_list	*first;


	temp = *stack_a;
	first = temp;
	while (first->next)
		first = first->next;
	while (temp->next->next)
		temp = temp->next;
	temp->next = NULL;
	ft_lstadd_front(stack_a, first);
	if (flag)
		write(1, "rra\n", 4);
}
void	rrb(t_list **stack_b, bool flag)
//rra : reverse rotate b - shift down all elements of stack b by 1.
//The last element becomes the first one.
{
	t_list *temp;
	t_list	*first;


	temp = *stack_b;
	first = temp;
	while (first->next)
		first = first->next;
	while (temp->next->next)
		temp = temp->next;
	temp->next = NULL;
	ft_lstadd_front(stack_b, first);
	if (flag)
		write(1, "rra\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b, bool flag)
/*
rrr : ra and rb at the same time. */
{
	rra(stack_a, false);
	rrb(stack_b, false);
	if (flag)
		write(1, "rrr\n", 4);
}
