/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboehm <aboehm@42adel.org.au>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:09:47 by aboehm            #+#    #+#             */
/*   Updated: 2022/02/19 17:02:57 by aboehm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_lst_free(t_list	**lst)
{
	t_list	*temp;

	temp = *lst;
	while (*lst)
	{
		temp = temp->next;
		free(*lst);
		*lst = temp;
	}
}

void	ft_lst_copy(t_list **input, t_list **output)
/* will copy the contents of a list into a new list */
{
	t_list	*temp;
	t_list	*current;

	if (*output != NULL)
		ft_lst_free(output);
	temp = *input;
	*output = ft_lstnew(temp->content);
	(*output)->flag = temp->flag;
	current = *output;
	while (temp != NULL)
	{
		temp = temp->next;
		if (temp == NULL)
			return ;
		current->next = ft_lstnew(temp->content);
		current->next->flag = temp->flag;
		current = current->next;
		if (temp->next == NULL)
			break ;
	}
}

void	ft_lstdel_front(t_list	**lst)
{
	t_list	*temp;

	temp = *lst;
	*lst = (*lst)->next;
	free(temp);
	temp = NULL;
}
