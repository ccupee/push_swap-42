/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:21:05 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/23 15:21:06 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(long n)
{
	int	number;

	number = 0;
	if (n <= 0)
		number = 1;
	else
		number = 0;
	while (n != 0)
	{
		number++;
		n = n / 10;
	}
	return (number);
}

static char	*ft_array(char *s, long number, int len)
{
	while (number > 0)
	{
		s[len--] = '0' + (number % 10);
		number = number / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	value;

	value = (long)n;
	len = ft_length(value);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	else
	{
		str[len--] = '\0';
		if (value < 0)
		{
			str[0] = '-';
			value *= (-1);
		}
		else if (value == 0)
			str[0] = '0';
		str = ft_array(str, value, len);
		return (str);
	}
}
