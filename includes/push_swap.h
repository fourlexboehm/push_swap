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

typedef struct {
	int s;
	int m;
	int l;
}	Median;

void	ft_lstdel_front(t_list	**lst);
void	ft_lst_copy(t_list **input, t_list **output);
void	sa(t_list **stack_a, bool flag);
void	sb(t_list **stack_b, bool flag);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a, bool flag);
void	rb(t_list **stack_b, bool flag);
void	rr(t_list **stack_a, t_list **stack_b, bool flag);
void	rra(t_list **stack_a, bool flag);
void	rrb(t_list **stack_b, bool flag);
void	rrr(t_list **stack_a, t_list **stack_b, bool flag);
void	ft_small_pa(t_list **stack_a, t_list **stack_b);
void	sort_three(t_list **stack_a);
void	sort_quarters(t_list **stack_a, t_list	**stack_b);
void	sort_halves(t_list **stack_a, t_list	**stack_b);
int 	ft_error(char **argv);
Median *find_median(t_list **lst, int l);


#endif
