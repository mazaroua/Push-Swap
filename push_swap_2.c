/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:46:39 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/27 14:20:12 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_2(t_list **stack_a, t_list **stack_b)
{
	if (list_len(*stack_a) == 2)
		two_numbers(&(*stack_a));
	else if (list_len(*stack_a) == 3)
		three_numbers(&(*stack_a));
	else if (list_len(*stack_a) == 4)
		four_numbers(&(*stack_a));
	else if (list_len(*stack_a) == 5)
		five_numbers(stack_a);
	else if (list_len(*stack_a) > 5 && list_len(*stack_a) <= 100)
	{
		sort_hundred(stack_a, stack_b);
		push_to_a(stack_a, stack_b);
	}
	else if (list_len(*stack_a) > 100)
	{
		sort_five_hundred(stack_a, stack_b);
		push_to_a(stack_a, stack_b);
	}
}
