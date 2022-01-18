/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:37:31 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/22 16:37:33 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *srcs, size_t number)
{
	if (dest == (void *)0 && srcs == (void *)0)
		return (NULL);
	if (srcs <= dest)
	{
		while (number--)
			((unsigned char *)dest)[number] = ((unsigned char *)srcs)[number];
	}
	else if (srcs > dest)
		ft_memcpy(dest, srcs, number);
	return (dest);
}
