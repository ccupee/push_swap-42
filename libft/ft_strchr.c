/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:38:42 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/25 18:18:11 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*ptr;

	ptr = (char *)str;
	while (*ptr != (unsigned char)ch)
	{
		if (*ptr == '\0')
			return (0);
		ptr++;
	}
	return (ptr);
}
