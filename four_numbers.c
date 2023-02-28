/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:43:22 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/25 16:46:42 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_the_smallest(t_list **stack_a)
{
	int		i;
	int		position;
	int		min;
	t_list	*list;

	i = 1;
	position = 0;
	list = (*stack_a);
	min = list->value;
	while (list)
	{
		if (list->value <= min)
		{
			min = list->value;
			position = i;
		}
		list = list->next;
		i++;
	}
	return (position);
}

void	four_numbers2(t_list **stack_a, t_list *stack_b, int position, int len)
{
	if (position == (len / 2) + 1)
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_a, &stack_b);
		three_numbers(stack_a);
		pa(stack_a, &stack_b);
	}
	else if (position == (len / 2) + 2)
	{
		rra(stack_a);
		pb(stack_a, &stack_b);
		three_numbers(stack_a);
		pa(stack_a, &stack_b);
	}
}

void	four_numbers(t_list **stack_a)
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
		three_numbers(stack_a);
		pa(stack_a, &stack_b);
	}
	else if (position <= len / 2)
	{
		ra(stack_a);
		pb(stack_a, &stack_b);
		three_numbers(stack_a);
		pa(stack_a, &stack_b);
	}
	else
		four_numbers2(stack_a, stack_b, position, len);
	free(stack_b);
}
