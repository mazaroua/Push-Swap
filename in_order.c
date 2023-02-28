/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:01:14 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/24 22:43:49 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	in_order(t_list *stack_a)
{
	t_list	*list;

	list = stack_a;
	while (list && list->next)
	{
		if (list->value < list->next->value)
			list = list->next;
		else
			return (0);
	}
	return (1);
}
