/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:47:42 by spgibber          #+#    #+#             */
/*   Updated: 2022/02/21 12:47:44 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**make_array_str(char *str)
{
	char	**arr;

	arr = ft_split(str, ' ');
	if (!arr)
		return (NULL);
	return (arr);
}

unsigned int	ft_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] != '\0' && s[i] == c)
				i++;
			continue ;
		}
		i++;
		if (s[i] == '\0')
			count++;
	}
	return (count);
}

int	*ft_make_int_array_str(char **array, int len)
{
	int	*new;
	int	i;

	i = 0;
	new = (int *)malloc((len - 1) * sizeof(int));
	while (i < len - 1)
	{
		if (ft_isnumber(array[i]) == 1)
		{
			new[i] = ft_atoi(array[i]);
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

int	*ft_make_sorted_int_array_str(char **array, int len)
{
	int	*new;
	int	i;

	i = 0;
	new = (int *)malloc((len - 1) * sizeof(int));
	if (!new)
		ft_print();
	while (i < len - 1)
	{
		if (ft_isnumber(array[i]) == 1)
		{
			new[i] = ft_atoi(array[i]);
			i++;
		}
		else
		{
			free(new);
			ft_print();
		}
	}
	ft_sort(new, len - 1);
	return (ft_check_duplicates(new, len - 1));
}
