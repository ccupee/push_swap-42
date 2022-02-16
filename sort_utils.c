#include "push_swap.h"

void	sort_three_a(t_env *env)
{
	if (env->stack_a->value == env->max)
		ft_ra(env, 1);
	if (env->stack_a->value == env->middle)
	{
		if ((env->stack_a->next)->value == env->max)
			ft_rra(env, 1);
		else
			ft_sa(env, 1);
		return ;
	}
	if ((env->stack_a->next)->value == env->max)
	{
		ft_rra(env, 1);
		ft_sa(env, 1);
	}
}

void	sort_three_b(t_env *env)
{
	if (env->stack_b->value == env->max)
		ft_rb(env, 1);
	if (env->stack_b->value == env->middle)
	{
		if (env->stack_b->next->value == env->max)
			ft_rrb(env, 1);
		else
			ft_sb(env, 1);
		return ;
	}
	if (env->stack_b->next->value == env->max)
	{
		ft_rrb(env, 1);
		ft_sb(env, 1);
	}
}
