#include "../includes/push_swap.h"

int	ft_find_smallest(t_list **stack, int x)
/* this function will find the smallest number in a linked list
** will return the location of the smallest number found, 0 is on top
** if no smaller number than x is found, the return is -1 */
{
	t_list	*temp;
	int		i;
	int		j;

	i = 0;
	j = -1;
	temp = *stack;
	while (temp != NULL)
	{
		if (temp->content < x)
		{
			x = temp->content;
			j = i;
		}
		temp = temp->next;
		i++;
	}
	return (j);
}


void	ft_small_pa(t_list **stack_a, t_list **stack_b)
/* will find the shortest way to rotate the smallest value of the stack to the top
** will sort largest value if encountered on the way */
{
	int	location_small;
	int	argc;

	if (stack_b)
		argc = ft_lstsize(*stack_b);
	else
		argc = 0;
	location_small = ft_find_smallest(stack_b, 2147483647);
	if (location_small < argc / 2)
	{
		while (location_small != 0 && *stack_b != NULL)
		{
			rb(stack_b, 1);
			location_small--;
		}
	}
	else
	{
		while (location_small < argc && *stack_b != NULL)
		{
			rrb(stack_b, 1);
			location_small++;
		}
	}
	pa(stack_a, stack_b);
	(*stack_a)->flag = 1;
	ra(stack_a, 1);
}

static void	ft_push_smallest_a_help(t_list **stack_a, int i, int n)
/* this will swap the found value to the top of the stack_a
** in the shortest way */
{
	if (n < 3)
	{
		i = 0;
		while (i < n)
		{
			ft_ra(stack_a, 1);
			i++;
		}
	}
	else
	{
		while (i >= n)
		{
			ft_rra(stack_a, 1);
			i--;
		}
	}
}

void	ft_push_smallest_a(t_stack **stack_a, t_stack **stack_b)
/* this function will push the smallest found integer of stack_a to stack_b */
{
	int		i;
	int		x;
	int		n;
	t_stack	*temp;

	i = 0;
	n = 0;
	temp = *stack_a;
	x = temp->content;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
		if (x > temp->content)
		{
			n = i;
			x = temp->content;
		}
	}
	if (n != 0)
		ft_push_smallest_a_help(stack_a, i, n);
	ft_pb(stack_a, stack_b);
}
//
//void	ft_large_pa(t_list **stack_a, t_list **stack_b)
///* will find the shortest way to rotate the largest value of the stack to the top
//** will sort smallest value if encountered on the way */
//{
//	int	location_high;
//	int	argc;
//
//	argc = ft_lstsize(*stack_b);
//	location_high = ft_find_largest(stack_b, -2147483648);
//	if (location_high < argc / 2)
//	{
//		while (location_high != 0 && *stack_b != NULL)
//		{
//			if (ft_find_smallest(stack_b, 2147483647) == 0)
//			{
//				pa(stack_a, stack_b);
//				(*stack_a)->flag = 1;
//				ra(stack_a, 1);
//				location_high--;
//				continue ;
//			}
//			rb(stack_b, 1);
//			location_high--;
//		}
//	}
//	else
//		while (location_high < argc && *stack_b != NULL)
//		{
//			if (ft_find_smallest(stack_b, 2147483647) == 0)
//			{
//				pa(stack_a, stack_b);
//				(*stack_a)->flag = 1;
//				if (*stack_b == NULL)
//					return ;
//				ra(stack_a, 1);
//				continue ;
//			}
//			rrb(stack_b, 1);
//			location_high++;
//		}
//		pa(stack_a, stack_b);
//	(*stack_a)->flag = -1;
//}
//int	ft_find_largest(t_list **stack, int x)
///* this function will find the largest number in a linked list
//** will return the location of the largest number found, 0 is on top
//** if no larger number than x is found, the return is -1 */
//{
//	t_list	*temp;
//	int		i;
//	int 	j;
//
//	i = 0;
//	j = -1;
//	temp = *stack;
//	while (temp != NULL)
//	{
//		if (temp->content > x)
//		{
//			x = temp->content;
//			j = i;
//		}
//		temp = temp->next;
//		i++;
//	}
//	return (j);
//}
