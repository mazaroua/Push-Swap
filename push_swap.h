/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <mazaroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:51:20 by mazaroua          #+#    #+#             */
/*   Updated: 2023/02/28 15:50:40 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>

typedef struct node
{
	int			value;
	struct node	*next;
	int			index;
}t_list;

int		ft_atoi(const char *str);
void	ft_putnbr(int n);
int		check_args(char *arg);
void	not_int(void);
void	dup_int(void);
int		check_dup(char **arg);
int		ft_strcmp(char *str, char *str2);
char	**ft_split(char *s, char c);
int		ft_strlen(char *str);
int		check(char **av);
char	*ft_strjoin(char *s1, char *s2);
t_list	*addnode(int value);
void	ft_swap(int *a, int *b);
void	push_swap_2(t_list **stack_a, t_list **stack_b);
int		list_len(t_list *list);
int		av_len(char **av);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stacka, t_list **stackb);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stacka, t_list **stackb);
void	two_numbers(t_list **stacka);
void	three_numbers(t_list **stack_a);
void	four_numbers(t_list **stack_a);
void	five_numbers(t_list **stack_a);
int		find_the_smallest(t_list **stack_a);
int		in_order(t_list *stack_a);
void	sort_hundred(t_list **stacka, t_list **stackb);
int		*indexes(t_list **stackb);
void	push_to_a(t_list **stacka, t_list **stackb);
void	sort_five_hundred(t_list **stacka, t_list **stackb);
void	indexing_and_adding(char **av, t_list **stack_a);
void	add_elements(t_list **root, t_list *new, int index);
char	**join_arguments(char **av);
void	check_if_spaces_or_empty(char **av);
void	check_if_max_int(char **av);
void	error(void);
void	free_all_elements(t_list *stack_a);
void	free_all_stack(t_list *stack);
void	free_(char **str);
void	error_and_exit(t_list *stacka, t_list *stackb, char *instruction);
int		stacka_in_order(t_list *stacka);
void	adding(char **av, t_list **stacka);

#endif