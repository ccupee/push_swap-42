#include "push_swap.h"

void	rb_score(t_env *env)
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

void	ra_score(t_env *env)
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
		while (!(cur_b->value < first_a->value && 
				cur_b->value >last_a->value))
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
