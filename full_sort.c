/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:19:03 by spgibber          #+#    #+#             */
/*   Updated: 2022/02/19 18:19:09 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_env *env)
{
	t_list	*first;
	t_list	*second;

	first = env->stack_a;
	second = first->next;
	if ((first->value == env->min && second->value == env->max) || \
		(first->value == env->max && second->value == env->middle) || \
		(first->value == env->middle && second->value == env->min))
		return (1);
	else
		return (0);
}

void	push2b(t_env *env)
{
	int	count;

	count = -1;
	while (env->a_size != 3)
	{
		if (env->stack_a->value != env->min && \
			env->stack_a->value != env->max && \
			env->stack_a->value != env->middle)
		{
			ft_pb(env, 1);
			if (env->stack_b->value > env->middle)
				ft_rb(env, 1);
		}
		else
			ft_ra(env, 1);
	}
	if (is_sorted(env) == 1)
		ft_sa(env, 1);
	sort_three_a(env);
}
