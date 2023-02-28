/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:44:25 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/25 16:11:59 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_numbers2(t_list **stack_a, int first, int second, int last)
{
	if (first > second && second < last)
		ra(&(*stack_a));
	else if (first < second && first < last)
	{
		sa(&(*stack_a));
		ra(&(*stack_a));
	}
	else if (first > last && second > last)
		rra(&(*stack_a));
}

void	three_numbers(t_list **stack_a)
{
	int	first;
	int	second;
	int	last;

	first = (*stack_a)->value;
	second = (*stack_a)->next->value;
	last = (*stack_a)->next->next->value;
	if (first < second && first < last && second < last)
		return ;
	if (last > first && last > second && first > second)
		sa(&(*stack_a));
	else if (first > second && second > last)
	{
		sa(&(*stack_a));
		rra(&(*stack_a));
	}
	else
		three_numbers2(&(*stack_a), first, second, last);
}
