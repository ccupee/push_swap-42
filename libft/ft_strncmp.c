/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:59:20 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/22 16:59:33 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	int		res;

	i = 0;
	while (i < n && str1[i] != '\0' && \
		(unsigned char)str1[i] == (unsigned char)str2[i])
		i++;
	if ((unsigned char)str1[i] == (unsigned char)str2[i] || i == n)
		res = 0;
	else if ((unsigned char)str1[i] > (unsigned char)str2[i])
		res = 1;
	else
		res = -1;
	return (res);
}
