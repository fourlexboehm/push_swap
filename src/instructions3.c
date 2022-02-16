/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboehm <aboehm@42adel.org.au>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:09:30 by aboehm            #+#    #+#             */
/*   Updated: 2022/02/16 00:09:32 by aboehm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrr(t_list **stack_a, t_list **stack_b, bool flag)
/*
rrr : ra and rb at the same time. */
{
	rra(stack_a, false);
	rrb(stack_b, false);
	if (flag)
		write(1, "rrr\n", 4);
}
