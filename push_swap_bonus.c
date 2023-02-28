/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:34:29 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/28 15:48:54 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line/get_next_line.h"

void	check_instructions(t_list **stacka, t_list **stackb, char *instruction)
{
	if (!(ft_strcmp(instruction, "sa\n")))
		sa(stacka);
	else if (!(ft_strcmp(instruction, "sb\n")))
		sb(stackb);
	else if (!(ft_strcmp(instruction, "ss\n")))
		ss(stacka, stackb);
	else if (!(ft_strcmp(instruction, "pa\n")))
		pa(stacka, stackb);
	else if (!(ft_strcmp(instruction, "pb\n")))
		pb(stacka, stackb);
	else if (!(ft_strcmp(instruction, "ra\n")))
		ra(stacka);
	else if (!(ft_strcmp(instruction, "rb\n")))
		rb(stackb);
	else if (!(ft_strcmp(instruction, "rr\n")))
		rr(stacka, stackb);
	else if (!(ft_strcmp(instruction, "rra\n")))
		rra(stacka);
	else if (!(ft_strcmp(instruction, "rrb\n")))
		rrb(stackb);
	else if (!(ft_strcmp(instruction, "rrr\n")))
		rrr(stacka, stackb);
	else
		error_and_exit(*stacka, *stackb, instruction);
}

void	_check_(t_list *stacka, t_list *stackb)
{
	char	*instruction;
	int		stack_len;

	stack_len = list_len(stacka);
	while (1)
	{
		instruction = get_next_line(0);
		if (!instruction)
			break ;
		check_instructions(&stacka, &stackb, instruction);
		free(instruction);
	}
	if (stacka_in_order(stacka) && list_len(stacka) == stack_len)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_all_stack(stacka);
	free_all_stack(stackb);
}

// void	f()
// {
// 	system("leaks checker");
// }

int	main(int ac, char **av)
{
	t_list	*stacka;
	t_list	*stackb;

	stacka = NULL;
	stackb = NULL;
	if (ac > 1)
	{
		av = join_arguments(av);
		if (check(av))
		{
			adding(av, &stacka);
			free_(av);
			_check_(stacka, stackb);
		}
	}
	return (0);
}
