/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:56:39 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/24 19:56:43 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_abs(long n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}	

static int	ft_count(long n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static int	ft_power(int n)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < n)
	{
		result *= 10;
		i++;
	}
	return (result);
}

static void	ft_check(long n, int fd)
{
	char	c;

	c = 0;
	if (n < 9 && n > 0)
	{
		c = n + '0';
		write (fd, &c, 1);
	}
	else if (n == 0)
		write (fd, "0", 1);
}	

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		count;
	int		i;
	long	value;

	c = 0;
	i = 0;
	value = (long)n;
	if (value < 0)
		write(fd, "-", 1);
	value = ft_abs(value);
	count = ft_count(value);
	if (value < 9 && value >= 0)
		ft_check(value, fd);
	else
	{
		while (i < count)
		{
			c = (value / ft_power(count - i - 1)) + '0';
			value = value % ft_power(count - i - 1);
			write (fd, &c, 1);
			i++;
		}	
	}
}

// int main()
// {
// 	ft_putnbr_fd(-2147483648, 1);
// }
