/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:46:39 by spgibber          #+#    #+#             */
/*   Updated: 2022/01/28 16:46:41 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_env *env, int flag)
{	
	t_list	*cur;
	t_list	*end;

	if (!(env->stack_a) || !(env->stack_a->next))
		return ;
	end = ft_lstlast(env->stack_a);
	cur = env->stack_a;
	while (cur->next != end)
		cur = cur->next;
	cur->next = NULL;
	end->next = env->stack_a;
	env->stack_a = end;
	if (flag == 1)
		ft_putendl_fd("rra", 1);
}

void	ft_rrb(t_env *env, int flag)
{	
	t_list	*cur;
	t_list	*end;

	if (!(env->stack_b) || !(env->stack_b->next))
		return ;
	end = ft_lstlast(env->stack_b);
	cur = env->stack_b;
	while (cur->next != end)
		cur = cur->next;
	cur->next = NULL;
	end->next = env->stack_b;
	env->stack_b = end;
	if (flag == 1)
		ft_putendl_fd("rrb", 1);
}

void	ft_rrr(t_env *env)
{
	ft_rra(env, 0);
	ft_rrb(env, 0);
	ft_putendl_fd("rrr", 1);
}
