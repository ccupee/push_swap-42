/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:51:02 by spgibber          #+#    #+#             */
/*   Updated: 2022/02/21 12:51:04 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_all(int *new, int *sorted_new)
{
	free(new);
	free(sorted_new);
}

static void	free_all_1(int *new, int *sorted_new, char **array, int len)
{
	int	i;

	i = -1;
	free(new);
	free(sorted_new);
	while (++i < len)
		free(array[i]);
	free(array);
}

static void	check_argc(int n)
{
	if (n == 1)
		return ;
}

t_env	*make_env(int *new, int *sorted_new, int len, t_env *env)
{
	ft_array_is_sorted(new, sorted_new, len);
	env = set_env(new, sorted_new, len);
	return (env);
}

int	main(int argc, char **argv)
{
	int		*new;
	int		*sorted_new;
	t_env	*env;
	char	**array;

	env = NULL;
	check_argc(argc);
	if (argc > 2)
	{
		new = ft_make_int_array(argv, argc);
		sorted_new = ft_make_sorted_int_array(argv, argc);
		env = make_env(new, sorted_new, argc, env);
		free_all(new, sorted_new);
	}
	else if (argc == 2)
	{
		array = make_array_str(argv[1]);
		new = ft_make_int_array_str(array, ft_count(argv[1], ' ') + 1);
		sorted_new = ft_make_sorted_int_array_str(array, \
					ft_count(argv[1], ' ') + 1);
		ft_array_is_sorted(new, sorted_new, ft_count(argv[1], ' ') + 1);
		env = set_env(new, sorted_new, ft_count(argv[1], ' ') + 1);
		free_all_1(new, sorted_new, array, ft_count(argv[1], ' '));
	}
	push_swap(env);
}
