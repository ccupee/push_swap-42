/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:35:30 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/22 16:35:32 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (!count)
		return (0);
	ptr1 = (unsigned char *)buf1;
	ptr2 = (unsigned char *)buf2;
	while (count-- && *ptr1 == *ptr2)
	{
		ptr1++;
		ptr2++;
	}
	if (!(count + 1))
		return (0);
	return (*ptr1 - *ptr2);
}
