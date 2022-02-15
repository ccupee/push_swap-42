#include "push_swap.h"

void	move_ra_rb_actions(t_env *env, t_list *min_elem)
{
	int	difference;
	int	rr_count;

	if (min_elem->ra_score > min_elem->rb_score)
	{
		difference = min_elem->ra_score - min_elem->rb_score;
		rr_count = min_elem->rb_score;
		while (rr_count-- > 0)
			ft_rr(env);
		while (difference-- > 0)
			ft_ra(env, 1);
	}
	else
	{
		difference = min_elem->rb_score - min_elem->ra_score;
		rr_count = min_elem->ra_score;
		while (rr_count-- > 0)
			ft_rr(env);
		while (difference-- > 0)
			ft_rb(env, 1);
	}
}

void	move_rra_rrb_actions(t_env *env, t_list *min_elem)
{
	int	difference;
	int	rrr_count;

	if (min_elem->rra_score > min_elem->rrb_score)
	{
		difference = min_elem->rra_score - min_elem->rrb_score;
		rrr_count = min_elem->rrb_score;
		while (rrr_count-- > 0)
			ft_rrr(env);
		while (difference-- > 0)
			ft_rra(env, 1);
	}
	else
	{
		difference = min_elem->rrb_score - min_elem->rra_score;
		rrr_count = min_elem->rra_score;
		while (rrr_count-- > 0)
			ft_rrr(env);
		while (difference-- > 0)
			ft_rrb(env, 1);
	}
}

void	move_ra_rrb_actions(t_env *env, t_list *min_elem)
{
	int	ra_count;
	int	rrb_count;

	ra_count = min_elem->ra_score;
	rrb_count = min_elem->rrb_score;
	while (ra_count-- > 0)
		ft_ra(env, 1);
	while (rrb_count-- > 0)
		ft_rrb(env, 1);
}

void	move_rra_rb_actions(t_env *env, t_list *min_elem)
{
	int	rra_count;
	int	rb_count;

	rra_count = min_elem->rra_score;
	rb_count = min_elem->rb_score;
	while (rra_count-- > 0)
		ft_rra(env, 1);
	while (rb_count-- > 0)
		ft_rb(env, 1);
}

void	min_score_move(t_env *env, t_list *min_elem)
{
	if (min_elem->type_of_actions == ra_rb_actions)
		move_ra_rb_actions(env, min_elem);
	else if (min_elem->type_of_actions == ra_rrb_actions)
		move_ra_rrb_actions(env, min_elem);
	else if (min_elem->type_of_actions == rra_rb_actions)
		move_rra_rb_actions(env, min_elem);
	else if (min_elem->type_of_actions == rra_rrb_actions)
		move_rra_rrb_actions(env, min_elem);
	ft_pa(env, 1);
}
