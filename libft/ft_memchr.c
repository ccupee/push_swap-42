/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:34:23 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/22 16:34:27 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*new;

	new = (unsigned char *)arr;
	while (n--)
	{
		if (*new == (unsigned char)c)
			return (new);
		new ++;
	}
	return (NULL);
}
