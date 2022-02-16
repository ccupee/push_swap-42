#include "push_swap.h"

static void	sort_a(t_env *env)
{
	int	first;
	int	second;

	first = env->stack_a->value;
	second = env->stack_a->next->value;
	if (first < second)
		ft_ra(env, 1);
}

static void	sort_b_4(t_env *env)
{
	int	first;
	int	second;

	first = env->stack_b->value;
	second = env->stack_b->next->value;
	if (first < second)
		ft_rb(env, 1);
}

static void	sort_b(t_env *env)
{
	int	first;
	int	second;
	int	third;

	first = env->stack_b->value;
	second = env->stack_b->next->value;
	third = env->stack_b->next->next->value;
	if (third < first && third > second)
	{
		ft_sb(env, 1);
		ft_rb(env, 1);
	}
	else if (!(second > third && second < first))
	{
		if (second > first && second < third)
			ft_sb(env, 1);
		else if (third < second && third > first)
			ft_rrb(env, 1);
		else if (first > third && first < second)
		{
			ft_sb(env, 1);
			return ;
		}
		ft_rrb(env, 1);
	}
}

void	mini_sort_5(t_env *env)
{
	while (env->a_size != 2)
	{
		if (env->stack_a->value == env->min || env->stack_a->value == env->max)
			ft_ra(env, 1);
		else
			ft_pb(env, 1);
	}
	sort_b(env);
	sort_a(env);
	ft_pa(env, 1);
	ft_pa(env, 1);
	ft_pa(env, 1);
	ft_rra(env, 1);
}

void	mini_sort_4(t_env *env)
{
	while (env->a_size != 2)
	{
		if (env->stack_a->value == env->min || env->stack_a->value == env->max)
			ft_ra(env, 1);
		else
			ft_pb(env, 1);
	}
	sort_a(env);
	sort_b_4(env);
	ft_pa(env, 1);
	ft_pa(env, 1);
	ft_rra(env, 1);
}
