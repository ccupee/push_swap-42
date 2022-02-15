#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_list	*list)//delete
{
	while (list)
	{
		printf("%d ",list->value);
		list = list->next;
	}
	
}

int	main(int argc, char **argv)
{
    int		*new;
	int		*sorted_new;
	t_env	*env;


	int array[4] = {0, 1, 2, 3};
	t_list *stack_dop;

	int i = 0;
	
	new = ft_make_int_array(argv, argc);
	sorted_new = ft_make_sorted_int_array(argv, argc);
	ft_array_is_sorted(new, sorted_new, argc);
	env = set_env(new, sorted_new, argc);

	//printf("%d\n", env->a_size);

	//mini_sort(env);
	//sort_three_a(env);

	//printf("%d", is_sorted(env));

	push2b(env);

	// ft_pb(env, 1);
	// ft_pb(env, 1);
	// ft_pb(env, 1);
	// ft_pb(env, 1);

	print_stack(env->stack_a);
	printf("%c", '\n');
	print_stack(env->stack_b);
	printf("%c", '\n');

	a_score(env);
	b_score(env);
	//printf("%d\n", env->stack_b->rra_score);

	//t_list *minimum;
	//minimum = find_min_elem(env);
	//printf("%d", minimum->value);
	min_score_move(env, find_min_elem(env));

	//printf("%c", '\n');
	print_stack(env->stack_a);
	printf("%c", '\n');
	print_stack(env->stack_b);

	// b_score(env);
	// a_score(env);
	// printf("%d\n", calculate_score(env->stack_a));
	
	return (0);
}
