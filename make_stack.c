/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:42:32 by spgibber          #+#    #+#             */
/*   Updated: 2022/01/28 16:42:33 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

int	*ft_make_int_array(char **array, int len)
{
	int	*new;
	int	i;

	i = 1;
	new = (int *)malloc((len - 1) * sizeof(int));
	while (i < len)
	{
		if (ft_isnumber(array[i]) == 1)
		{
			new[i - 1] = ft_atoi(array[i]);
			i++;
		}
		else
		{
			free(new);
			ft_print();
		}
	}
	return (ft_check_duplicates(new, len - 1));
}

void	ft_array_is_sorted(int *array, int *new_array, int len)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (++i < len - 1)
	{
		if (array[i] == new_array[i])
			count++;
	}
	if (count == len - 1)
	{
		free(array);
		free(new_array);
		exit(EXIT_FAILURE);
	}
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
