/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:56:58 by spgibber          #+#    #+#             */
/*   Updated: 2022/01/28 16:56:59 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>///

void	final_sort_a(t_env *env)
{
	t_list	*cur;
	int		count;

	count = 0;
	cur = env->stack_a;
	while (cur->value != env->min)
	{
		cur = cur->next;
		count++;
	}
	if (count > env->a_size / 2)
	{
		while (count-- > 0)
			ft_rra(env, 1);
	}
	else
	{
		while (count-- > 0)
			ft_ra(env, 1);
	}
}

void	push2a(t_env *env)
{
	t_list	*cur;
	t_list	*min_elem;
	int		minimum;
	int		cur_minimum;

	a_score(env);
	b_score(env);
	min_elem = find_min_elem(env);
	min_score_move(env, min_elem);
}

void	push_swap(t_env *env)
{
	if (env->a_size == 2)
	{
		ft_sa(env, 1);
		return ;
	}
	if (env->a_size == 3)
	{
		sort_three_a(env);
		return ;
	}
	if (env->a_size == 5)
	{
		mini_sort(env);
		return ;
	}
	push2b(env);
	print_stack(env->stack_a);
	printf("\n");
	while (env->b_size != 0)
	{
		push2a(env);
		print_stack(env->stack_a);
		printf("\n");
		print_stack(env->stack_b);
		printf("\n");
	}
	final_sort_a(env);
	// ft_lstclear(&(env->stack_a));
	// free(env);
}