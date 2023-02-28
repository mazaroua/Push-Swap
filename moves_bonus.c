/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:22:35 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/28 15:55:49 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **stack_a)
{
	if (!*stack_a || !(*stack_a)->next)
		return ;
	ft_swap(&(*stack_a)->value, &(*stack_a)->next->value);
}

void	sb(t_list **stack_b)
{
	if (!*stack_b || !(*stack_b)->next)
		return ;
	ft_swap(&(*stack_b)->value, &(*stack_b)->next->value);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*first;

	if (!*stack_b)
		return ;
	first = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	first->next = *stack_a;
	(*stack_a) = first;
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*first;

	if (!*stack_a)
		return ;
	first = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	first->next = *stack_b;
	(*stack_b) = first;
}
