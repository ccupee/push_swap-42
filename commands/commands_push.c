/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:46:17 by spgibber          #+#    #+#             */
/*   Updated: 2022/01/28 16:46:19 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa(t_env *env, int flag)
{
	t_list	*cur;

	if (!(env->stack_b))
		return ;
	cur = env->stack_b;
	env->stack_b = env->stack_b->next;
	ft_lstadd_front(&(env->stack_a), cur);
	env->a_size++;
	env->b_size--;
	if (flag == 1)
		ft_putendl_fd("pa", 1);
}

void	ft_pb(t_env *env, int flag)
{
	t_list	*cur;

	if (!(env->stack_a))
		return ;
	cur = env->stack_a;
	env->stack_a = env->stack_a->next;
	ft_lstadd_front(&(env->stack_b), cur);
	env->b_size++;
	env->a_size--;
	ft_putendl_fd("pb", 1);
}
