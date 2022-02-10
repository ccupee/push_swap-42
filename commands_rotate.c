/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:46:58 by spgibber          #+#    #+#             */
/*   Updated: 2022/01/28 16:47:00 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_env *env, int flag)
{
	t_list	*cur;
	int		current;

	if (!(env->stack_a) || !(env->stack_a->next))
		return ;
	cur = env->stack_a;
	current = cur->value;
	while (cur->next)
	{
		cur->value = cur->next->value;
		cur = cur->next;
	}
	ft_lstlast(cur)->value = current;
	if (flag == 1)
		ft_putendl_fd("ra", 1);
}

void	ft_rb(t_env *env, int flag)
{
	t_list	*cur;
	int		current;

	if (!(env->stack_b) || !(env->stack_b->next))
		return ;
	cur = env->stack_b;
	current = cur->value;
	while (cur->next)
	{
		cur->value = cur->next->value;
		cur = cur->next;
	}
	ft_lstlast(cur)->value = current;
	if (flag == 1)
		ft_putendl_fd("rb", 1);
}

void	ft_rr(t_env *env)
{
	ft_ra(env, 0);
	ft_rb(env, 0);
	ft_putendl_fd("rr", 1);
}
