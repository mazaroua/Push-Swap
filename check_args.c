/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:21:40 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/28 16:09:34 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_args(char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == '-' || arg[i] == '+')
		i++;
	while (arg[i])
	{
		if (arg[i] < '0' || arg[i] > '9')
			error();
		i++;
	}
	return (1);
}

int	check_dup(char **arg)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	while (arg[i])
	{
		k = j;
		while (arg[k])
		{
			if (!ft_strcmp(arg[i], arg[k]))
				error();
			k++;
		}
		j++;
		i++;
	}
	return (1);
}

int	check(char **av)
{
	int	i;

	i = 0;
	check_dup(av);
	while (av[i])
	{
		if (!check_args(av[i]))
			return (0);
		i++;
	}
	return (1);
}
