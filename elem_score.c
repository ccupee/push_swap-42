/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elem_score.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:15:58 by spgibber          #+#    #+#             */
/*   Updated: 2022/02/19 18:16:05 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	b_score(t_env *env)
{
	int		score;
	t_list	*cur;

	env->stack_b->rb_score = 0;
	env->stack_b->rrb_score = 0;
	score = 1;
	cur = env->stack_b->next;
	while (cur)
	{
		cur->rb_score = score;
		cur->rrb_score = env->b_size - score;
		score++;
		cur = cur->next;
	}
}

void	a_score(t_env *env)
{
	t_list	*cur_b;
	t_list	*first_a;
	t_list	*last_a;
	t_list	*last_elem;
	int		score;

	cur_b = env->stack_b;
	last_elem = ft_lstlast(env->stack_a);
	score = 0;
	while (cur_b)
	{
		first_a = env->stack_a;
		last_a = last_elem;
		score = 0;
		while (!(cur_b->value < first_a->value && \
				cur_b->value > last_a->value))
		{
			last_a = first_a;
			first_a = first_a->next;
			score++;
		}
		cur_b->ra_score = score;
		cur_b->rra_score = env->a_size - score;
		cur_b = cur_b->next;
	}
}

static int	minimum(int *arr)
{
	int	i;
	int	min;

	i = 0;
	min = arr[0];
	while (i < 4)
	{
		if (arr[i] < min)
			min = arr[i];
		i++;
	}
	return (min);
}

static int	calculate_score(t_list *stack)
{
	int	min;
	int	score[4];

	score[0] = stack->ra_score + stack->rb_score;
	score[1] = stack->ra_score + stack->rrb_score;
	score[2] = stack->rra_score + stack->rb_score;
	score[3] = stack->rra_score + stack->rrb_score;
	min = minimum(score);
	if (min == score[0])
		stack->type_of_actions = ra_rb_actions;
	if (min == score[1])
		stack->type_of_actions = ra_rrb_actions;
	if (min == score[2])
		stack->type_of_actions = rra_rb_actions;
	if (min == score[3])
		stack->type_of_actions = rra_rrb_actions;
	return (min);
}

t_list	*find_min_elem(t_env *env)
{
	t_list	*min_elem;
	t_list	*cur;

	min_elem = env->stack_b;
	cur = env->stack_b;
	cur = cur->next;
	while (cur)
	{
		if (calculate_score(min_elem) > calculate_score(cur))
			min_elem = cur;
		cur = cur->next;
	}	
	return (min_elem);
}
