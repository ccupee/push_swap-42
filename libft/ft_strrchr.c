/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:01:05 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/22 17:01:07 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*iter;

	iter = NULL;
	while (*s)
	{
		if (*s == (char)c)
			iter = (char *)s;
		s++;
	}
	if (*s == (char)c)
		iter = (char *)s;
	return (iter);
}
