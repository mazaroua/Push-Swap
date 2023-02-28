/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:06:26 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/27 14:39:15 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five_hundred(t_list **stacka, t_list **stackb)
{
	int	i;
	int	j;

	i = 0;
	j = 40;
	while (*stacka)
	{
		if ((*stacka)->index <= i)
		{
			pb(stacka, stackb);
			i++;
		}
		else if ((*stacka)->index <= i + j)
		{
			pb(stacka, stackb);
			rb(stackb);
			i++;
		}
		else
			ra(stacka);
	}
}
