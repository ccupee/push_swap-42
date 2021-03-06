/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:38:27 by spgibber          #+#    #+#             */
/*   Updated: 2022/01/28 16:38:29 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(int *array, int len)
{
	int	i;
	int	j;
	int	number;

	i = 0;
	number = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (array[j] < array[i])
			{
				number = array[i];
				array[i] = array[j];
				array[j] = number;
			}
			j++;
		}
		i++;
	}
}

int	ft_check_max_min(char *str)
{
	char	*new_number;
	int		number;

	number = ft_atoi(str);
	new_number = ft_itoa(number);
	if (ft_strncmp(str, new_number, ft_strlen(str)) != 0)
	{
		free(new_number);
		ft_print();
	}
	return (1);
}

int	ft_isnumber(char *str)
{
	int	i;

	i = 0;
	if ((str[0] != '-') && !ft_isdigit(str[0]))
		ft_print();
	else
		i++;
	while (i < ft_strlen(str))
	{
		if (ft_isdigit(str[i]))
			i++;
		else
			ft_print();
	}
	if (ft_strlen(str) > 11)
		ft_print();
	else if (ft_strlen(str) == 10 || ft_strlen(str) == 11)
	{
		if (ft_check_max_min(str) == 1)
			return (1);
	}
	return (1);
}

int	*ft_check_duplicates(int *array, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (array[i] == array[j])
			{
				free(array);
				ft_print();
			}
			else
				j++;
		}
		i++;
	}
	return (array);
}

int	*ft_make_sorted_int_array(char **array, int len)
{
	int	*new;
	int	i;

	i = 1;
	new = (int *)malloc((len - 1) * sizeof(int));
	if (!new)
		ft_print();
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
	ft_sort(new, len - 1);
	return (ft_check_duplicates(new, len - 1));
}
