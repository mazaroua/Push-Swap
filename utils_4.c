/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:54:58 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/28 15:46:56 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all_stack(t_list *stack)
{
	t_list	*curr;
	t_list	*next;

	curr = stack;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}

void	free_(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i > -1)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

void	error_and_exit(t_list *stacka, t_list *stackb, char *instruction)
{
	write(1, "Error\n", 6);
	free(instruction);
	free_all_stack(stacka);
	free_all_stack(stackb);
	exit(0);
}

int	stacka_in_order(t_list *stacka)
{
	if (!stacka)
		return (0);
	while (stacka->next)
	{
		if ((stacka)->value > (stacka)->next->value)
			return (0);
		(stacka) = (stacka)->next;
	}
	return (1);
}

void	adding(char **av, t_list **stacka)
{
	int		i;
	int		j;
	int		index;

	i = -1;
	index = av_len(av) - 1;
	while (av[++i])
	{
		j = -1;
		while (av[++j])
		{
			if ((i != j) && ft_atoi(av[i]) < ft_atoi(av[j]))
				index--;
		}
		add_elements(stacka, addnode(ft_atoi(av[i])), index);
		index = av_len(av) - 1;
	}
}
