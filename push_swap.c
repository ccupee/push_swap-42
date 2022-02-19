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

t_env	*set_env(int *array, int *sorted_array, int len)
{
	t_env	*env;

	env = (t_env *) malloc(sizeof(t_env));
	if (!env)
		return (NULL);
	env->max = sorted_array[len - 2];
	env->min = sorted_array[0];
	env->middle = sorted_array[(len - 1) / 2];
	env->stack_a = ft_lstnew(array[0]);
	ft_make_stack(env->stack_a, array, len);
	env->stack_b = NULL;
	env->a_size = len - 1;
	env->b_size = 0;
	if (!env->stack_a)
	{
		free(env);
		return (NULL);
	}
	return (env);
}

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
	t_list	*min_elem;

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
	if (env->a_size == 4)
	{
		mini_sort_4(env);
		return ;
	}
	if (env->a_size == 5)
	{
		mini_sort_5(env);
		return ;
	}
	push2b(env);
	while (env->b_size != 0)
		push2a(env);
	final_sort_a(env);
	ft_lstclear(&(env->stack_a));
	free(env);
}
