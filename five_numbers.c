/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:41:14 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/25 18:24:22 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	five_numbers2(t_list **stack_a, t_list *stack_b, int position, int len)
{
	if (position == (len / 2) + 1)
	{
		rra(stack_a);
		rra(stack_a);
		rra(stack_a);
		pb(stack_a, &stack_b);
		four_numbers(stack_a);
		pa(stack_a, &stack_b);
	}
	if (position == (len / 2) + 2)
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_a, &stack_b);
		four_numbers(stack_a);
		pa(stack_a, &stack_b);
	}
	if (position == (len / 2) + 3)
	{
		rra(stack_a);
		pb(stack_a, &stack_b);
		four_numbers(stack_a);
		pa(stack_a, &stack_b);
	}
}

void	five_numbers(t_list **stack_a)
{
	t_list	*stack_b;
	int		position;
	int		len;

	stack_b = malloc(sizeof(t_list));
	position = find_the_smallest(&(*stack_a));
	len = list_len((*stack_a));
	if (position == 1)
	{
		pb(stack_a, &stack_b);
		four_numbers(stack_a);
		pa(stack_a, &stack_b);
	}
	else if (position <= len / 2)
	{
		ra(stack_a);
		pb(stack_a, &stack_b);
		four_numbers(stack_a);
		pa(stack_a, &stack_b);
	}
	else
		five_numbers2(stack_a, stack_b, position, len);
	free(stack_b);
}
