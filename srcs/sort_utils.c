#include "../includes/push_swap.h"

//void	ft_small_pa(int argc, t_list **stack_a, t_list **stack_b)
///* will find the shortest way to rotate the smallest value of the stack to the top
//** will sort largest value if encountered on the way */
//{
//	int	location_small;
//
//	argc = ft_lst_size(stack_b);
//	location_small = ft_find_smallest(stack_b, 2147483647);
//	if (location_small < argc / 2)
//	{
//		while (location_small != 0 && *stack_b != NULL)
//		{
//			if (ft_find_largest(stack_b, -2147483648) == 0)
//			{
//				pa(stack_a, stack_b);
//				(*stack_a)->flag = -1;
//				location_small--;
//				continue ;
//			}
//			rb(stack_b, 1);
//			location_small--;
//		}
//	}
//	else
//	{
//		while (location_small < argc && *stack_b != NULL)
//		{
//			if (ft_find_largest(stack_b, -2147483648) == 0)
//			{
//				pa(stack_a, stack_b);
//				(*stack_a)->flag = -1;
//				continue ;
//			}
//			rrb(stack_b, 1);
//			location_small++;
//		}
//	}
//	pa(stack_a, stack_b);
//	(*stack_a)->flag = -1;
//	ra(stack_a, 1);
//}