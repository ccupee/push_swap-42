#include "libft/libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_print()
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

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

int ft_check_max_min(char *str)
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
	return(1);
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
	int j;

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
	return(array);
}

int	*ft_make_sorted_int_array(char **array, int len)
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
	ft_sort(new, len - 1);
	return (ft_check_duplicates(new, len - 1));
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


int	main(int argc, char *argv[])
{
    int	*new;
	int	*sorted_new;
	int i = 0;
	
	new = ft_make_int_array(argv, argc);
	sorted_new = ft_make_sorted_int_array(argv, argc);
	//printf("%d\n", ft_check_max_min("-2147483648"));
	//ft_sort(new, argc - 1);
	while (i < argc - 1)
	{
		printf("%d ", new[i]);
		i++;
	}
	//printf("%d\n", ft_atoi("-2147483649"));
}
