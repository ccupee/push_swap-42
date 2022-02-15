#include "push_swap.h"

void	push2b(t_env *env)
{
	int	count;

	count = -1;
	while (env->a_size != 2)
	{
		if (env->stack_a->value != env->min && env->stack_a->value != env->max)
		{
			ft_pb(env, 1);
			if (env->stack_b->value > env->middle)
				ft_rb(env, 1);
		}
		else
			ft_ra(env, 1);

	}
}