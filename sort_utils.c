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
	env->a_size = len;
	env->b_size = 0;
	if (!env->stack_a)
	{
		free(env);
		return (NULL);
	}
	return (env);
}

int	is_sorted(t_list	*stack)
{
	t_list	*cur;

	if (!stack || !stack->next)
		return (0);
	cur = stack;
	while (cur->next)
	{
		if (cur->value > cur->next->value)
			return (0);
		cur = cur->next;
	}
	return (1);
}

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
