/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:37:54 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/22 16:37:56 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int c, size_t count)
{
	size_t			i;
	unsigned char	*res;

	res = (unsigned char *)buf;
	i = 0;
	while (i < count)
	{
		*res = (unsigned char)c;
		res++;
		i++;
	}
	return (buf);
}
