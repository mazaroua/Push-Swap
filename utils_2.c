/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:25:31 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/28 21:22:51 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

int	list_len(t_list *list)
{
	int		i;
	t_list	*curr;

	i = 0;
	curr = list;
	while (curr)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}

t_list	*addnode(int value)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->value = value;
	newnode->next = NULL;
	return (newnode);
}

char	**join_arguments(char **av)
{
	int		i;
	char	*args;
	char	**args_splited;
	char	*temp;

	check_if_spaces_or_empty(av);
	i = 1;
	args = malloc(1);
	if (!args)
		return (NULL);
	args[0] = '\0';
	while (av[i])
	{
		av[i] = ft_strjoin(av[i], " ");
		temp = args;
		args = ft_strjoin(args, av[i]);
		free(temp);
		free(av[i]);
		i++;
	}
	args_splited = ft_split(args, ' ');
	free(args);
	return (args_splited);
}

void	add_elements(t_list **root, t_list *new, int index)
{
	t_list	*curr;

	if (!new)
	{
		free_all_stack(*root);
		exit(1);
	}
	curr = *root;
	if (!*root)
	{
		*root = new;
		(*root)->index = index;
		return ;
	}
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
	curr->next->index = index;
}
