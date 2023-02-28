/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:34:39 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/26 22:08:49 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*index_to_array(t_list **stackb)
{
	int		i;
	int		*arr;
	t_list	*b;

	i = 0;
	arr = malloc(sizeof(int) * list_len(*stackb));
	b = *stackb;
	while (b)
	{
		arr[i] = b->index;
		i++;
		b = b->next;
	}
	return (arr);
}

int	find_max_index(t_list **stackb)
{
	int	*arr;
	int	i;
	int	max;
	int	p;
	int	len;

	arr = index_to_array(stackb);
	i = 0;
	max = arr[i];
	p = 0;
	len = list_len(*stackb);
	while (i < len)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			p = i;
		}
		i++;
	}
	free(arr);
	return (p);
}

void	push_to_a_2(t_list **stacka, t_list **stackb, int position)
{
	int	moves;

	if (position > list_len(*stackb) / 2)
	{
		moves = list_len(*stackb) - position;
		while (moves)
		{
			rrb(stackb);
			moves--;
		}
		pa(stacka, stackb);
	}
	else if (position == list_len(*stackb) / 2)
	{
		moves = position;
		while (moves)
		{
			rb(stackb);
			moves--;
		}
		pa(stacka, stackb);
	}
}

void	push_to_a(t_list **stacka, t_list **stackb)
{
	int	moves;
	int	position;

	while (*stackb)
	{
		position = find_max_index(stackb);
		if (position < list_len(*stackb) / 2)
		{
			moves = position;
			while (moves)
			{
				rb(stackb);
				moves--;
			}
			pa(stacka, stackb);
		}
		else
		{
			push_to_a_2(stacka, stackb, position);
		}
	}
}
