#include "push_swap.h"

void	join_stacks(t_env *env)
{

}

void	mini_sort(t_env *env)
{
	if (env->a_size == 2)
	{
		ft_sa(env, 1);
		return ;
	}
	while (env->a_size > 3)
		ft_pb(env, 1);
	sort_three_a(env);
	if (env->b_size == 2 && !is_sorted(env->stack_b))
		ft_sb(env, 1);
	else if (env->b_size == 3)
		sort_three_b(env);
	join_stacks(env);
}