#include "push_swap.h"
#include <stdlib.h>//
#include <stdio.h>//

void	ft_print()
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

void	ft_make_node(int value, t_list **lst)
{
	t_list	*new;

	if (!lst)
	{
		*lst = ft_lstnew(value);
	}
	else
	{
		new = ft_lstnew(value);
		ft_lstadd_back(lst, new);
	}
}

void	ft_make_stack(t_list *lst, int *array, int len)
{
	int	j;

	j = 1;
	while (j < len - 1)
		ft_make_node(array[j++], &lst);
}

void	print_stack(t_list	*list)//
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
	t_list	*stack;

	int i = 0;//
	
	new = ft_make_int_array(argv, argc);
	sorted_new = ft_make_sorted_int_array(argv, argc);
	ft_array_is_sorted(new, sorted_new, argc);
	stack = ft_lstnew(new[0]);
	ft_make_stack(stack, new, argc);
	//printf("%d\n", ft_check_max_min("-2147483648"));
	//ft_sort(new, argc - 1);
	while (i < argc - 1)
	{
		//printf("%d ", sorted_new[i]);
		printf("%d ", new[i]);
		i++;
	}
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
	printf("\n%d\n", stack->value);
	print_stack(stack);
	return (0);
}
