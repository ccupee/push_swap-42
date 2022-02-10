#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_list	*list)//
{
	while (list)
	{
		printf("%d ",list->value);
		list = list->next;
	}
	
}

static t_env	*set_env(int *array, int *sorted_array, int len)
{
	t_env	*env;

	env = (t_env *) malloc(sizeof(t_env));
	if (!env)
		return (NULL);
	env->max = sorted_array[len - 2];
	env->min = sorted_array[0];
	env->mid = sorted_array[len / 2];
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

int	main(int argc, char **argv)
{
    int		*new;
	int		*sorted_new;
	t_env	*env;


	int array[4] = {0, 1, 2, 3};
	t_list *stack_dop;

	int i = 0;//
	
	new = ft_make_int_array(argv, argc);
	sorted_new = ft_make_sorted_int_array(argv, argc);
	ft_array_is_sorted(new, sorted_new, argc);
	// stack = ft_lstnew(new[0]);
	// ft_make_stack(stack, new, argc);
	// printf("%d\n", ft_check_max_min("-2147483648"));
	// ft_sort(new, argc - 1);
	// while (i < argc - 1)
	// {
	// 	//printf("%d ", sorted_new[i]);
	// 	printf("%d ", new[i]);
	// 	i++;
	// }

	env = set_env(new, sorted_new, argc);
	// stack_dop = ft_lstnew(array[0]);
	// ft_make_stack(stack_dop, array, argc);

	//printf("%d\n");
	//printf("%d\n", stack->value);
	//printf("%d\n", ft_atoi("-2147483649"));
	//ft_make_stack(&stack, new, argc);
	// i = 1;
	// while (i < argc - 1)
	// {
	// 	printf("errori = %d ", i);
	// 	ft_make_node(new[i], &stack);
	// 	i++;
	// }
	//printf("\n%d\n", stack->value);
	// printf("%c", '\n');
	// print_stack(env->stack_a);
	// printf("%c", '\n');
	//printf("%d", env->stack_a->value);
	//printf("%c", '\n');
	// ft_pb(env, 1);
	// ft_pb(env, 1);
	// ft_pb(env, 1);

	sort_three_a(env);
	
	print_stack(env->stack_a);
	printf("%c", '\n');
	// print_stack(env->stack_b);

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
