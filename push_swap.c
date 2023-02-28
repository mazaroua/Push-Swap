/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:41:51 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/28 21:51:47 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	if (ac > 1)
	{
		av = join_arguments(av);
		if (check(av))
			adding(av, &stack_a);
		free_(av);
		if (!(in_order(stack_a)))
			push_swap_2(&stack_a, &stack_b);
		free_all_stack(stack_a);
	}
	return (0);
}
