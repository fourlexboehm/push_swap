/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboehm <aboehm@42adel.org.au>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:46:29 by aboehm            #+#    #+#             */
/*   Updated: 2022/01/21 21:00:39 by aboehm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
static void small_sort(int argc, t_list **stack_a, t_list **stack_b);
void	ft_lstdel_front(t_list	**lst);
void	ft_lst_copy(t_list **input, t_list **output);
void	sa(t_list **stack_a, bool flag);
void	sb(t_list **stack_b, bool flag);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b, bool flag);
void	pb(t_list **stack_a, t_list **stack_b, bool flag);
void	ra(t_list **stack_a, bool flag);
void	rb(t_list **stack_b, bool flag);
void	rr(t_list **stack_a, t_list **stack_b, bool flag);
void	rra(t_list **stack_a, bool flag);
void	rrb(t_list **stack_b, bool flag);
void	rrr(t_list **stack_a, t_list **stack_b, bool flag);
void	ft_small_pa(int argc, t_list **stack_a, t_list **stack_b);



#endif
