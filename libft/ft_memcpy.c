/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:36:13 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/22 16:36:15 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*destptr, const void *srcptr, size_t num)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*src;

	i = 0;
	dest = (unsigned char *)destptr;
	src = (unsigned char *)srcptr;
	if (src == NULL && dest == NULL && num != 0)
		return (NULL);
	while (i < num)
	{
		*(dest++) = *(src++);
		i++;
	}
	return (destptr);
}
