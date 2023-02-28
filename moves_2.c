/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:26:07 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/28 15:54:00 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*last;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	tmp = (*stack_a);
	last = (*stack_a);
	while (last->next)
		last = last->next;
	(*stack_a) = (*stack_a)->next;
	last->next = tmp;
	tmp->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*last;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	tmp = (*stack_b);
	last = (*stack_b);
	while (last->next)
		last = last->next;
	(*stack_b) = (*stack_b)->next;
	last->next = tmp;
	tmp->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_list **stacka, t_list **stackb)
{
	ra(stacka);
	rb(stackb);
	write(1, "rr\n", 3);
}

void	rra(t_list **stack_a)
{
	t_list	*last;
	t_list	*new;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	last = (*stack_a);
	new = (*stack_a);
	while (last->next)
		last = last->next;
	last->next = (*stack_a);
	while (new->next != last)
		new = new->next;
	new->next = NULL;
	(*stack_a) = last;
	write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b)
{
	t_list	*last;
	t_list	*new;

	if (!*stack_b)
		return ;
	last = (*stack_b);
	new = (*stack_b);
	while (last->next)
		last = last->next;
	last->next = (*stack_b);
	while (new->next != last)
		new = new->next;
	new->next = NULL;
	(*stack_b) = last;
	write(1, "rrb\n", 4);
}
