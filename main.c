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
	int		len;
	
	new = ft_make_int_array(argv, argc);
	sorted_new = ft_make_sorted_int_array(argv, argc);
	ft_array_is_sorted(new, sorted_new, argc);
	env = set_env(new, sorted_new, argc);

	print_stack(env->stack_a);
	printf("%c", '\n');
	print_stack(env->stack_b);
	printf("%c", '\n');

	push_swap(env);

	print_stack(env->stack_a);
	printf("\n");
	print_stack(env->stack_b);
	
	return (0);
}
