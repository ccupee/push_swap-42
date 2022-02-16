/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:48:38 by spgibber          #+#    #+#             */
/*   Updated: 2022/01/28 16:48:39 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_env *env, int flag)
{
	int		current;

	if (!(env->stack_a) || !(env->stack_a->next))
		return ;
	current = env->stack_a->value;
	env->stack_a->value = (env->stack_a->next)->value;
	(env->stack_a->next)->value = current;
	if (flag == 1)
		ft_putendl_fd("sa", 1);
}

void	ft_sb(t_env *env, int flag)
{
	int		current;

	if (!(env->stack_b) || !(env->stack_b->next))
		return ;
	current = env->stack_b->value;
	env->stack_b->value = (env->stack_b->next)->value;
	(env->stack_b->next)->value = current;
	if (flag == 1)
		ft_putendl_fd("sb", 1);
}

void	ft_ss(t_env *env)
{
	ft_sa(env, 0);
	ft_sb(env, 0);
	ft_putendl_fd("ss", 1);
}
