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

	while (i < argc - 1)
		printf("%d ", sorted_new[i++]);
	printf("%c", '\n');
	printf("%d\n", env->max);
	printf("%d\n", env->min);
	printf("%d\n", env->middle);
	// printf("%c", '\n');
	// print_stack(env->stack_a);
	// printf("%c", '\n');
	//printf("%d", env->stack_a->value);
	// printf("%c", '\n');
	// ft_pb(env, 1);
	// print_stack(env->stack_a);
	// printf("%c", '\n');
	// print_stack(env->stack_b);
	// ft_pb(env, 1);
	// ft_pb(env, 1);

	sort_three_a(env);

	printf("%c", '\n');
	print_stack(env->stack_a);
	printf("%c", '\n');
	print_stack(env->stack_b);

	// printf("%c", '\n');
	// ft_pb(env, 1);
	// print_stack(env->stack_a);
	// printf("%c", '\n');
	// print_stack(env->stack_b);

	// printf("%c", '\n');
	// ft_ss(env);
	// print_stack(env->stack_a);
	// printf("%c", '\n');
	// print_stack(env->stack_b);

	// printf("%c", '\n');
	// ft_rb(env, 1);
	// print_stack(env->stack_a);
	// printf("%c", '\n');
	// print_stack(env->stack_b);

	// printf("%c", '\n');
	// ft_rr(env);
	// print_stack(env->stack_a);
	// printf("%c", '\n');
	// print_stack(env->stack_b);

	//print_stack(stack_dop);

	// ft_sa(&stack, 1);
	// printf("%c", '\n');
	//print_stack(stack);

	// ft_ra(&stack, 1);
	// printf("%c", '\n');
	//print_stack(stack);

	// ft_rra(&stack, 1);
	// printf("%c", '\n');
	//print_stack(stack);

	//ft_pb(&stack, &stack_dop);
	// printf("%c", '\n');
	// print_stack(stack);
	// printf("%c", '\n');
	// print_stack(stack_dop);
	return (0);
}
