#include "push_swap.h"

int	is_sorted(t_env *env)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;


	first = env->stack_a;
	second = first->next;
	third = second->next;
	if ((first->value > second->value && second->value > third->value) ||
		(first->value > second->value && second->value < third->value))
			return (1);
	else if (first->value < second->value && second->value > third->value &&
			first->value < third->value)
			return (2);
	else
		return (0);
}

void	push2b(t_env *env)
{
	int	count;

	count = -1;
	while (env->a_size != 3)
	{
		if (env->stack_a->value != env->min && env->stack_a->value != env->max && env->stack_a->value != env->middle)
		{
			ft_pb(env, 1);
			if (env->stack_b->value > env->middle)
				ft_rb(env, 1);
		}
		else
			ft_ra(env, 1);
	}
	// if (is_sorted(env) == 1)
	// 	ft_sa(env, 1);
	// if (is_sorted(env) == 2)
	// {
	// 	ft_rra(env, 1);
	// 	ft_sa(env, 1);
	// }
	sort_three_a(env);
}
