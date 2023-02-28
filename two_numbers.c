/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 23:40:32 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/25 16:12:41 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_numbers(t_list **stacka)
{
	int	first;
	int	second;

	first = (*stacka)->value;
	second = (*stacka)->next->value;
	if (first > second)
		sa(stacka);
}
