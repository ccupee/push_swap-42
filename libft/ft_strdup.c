/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:39:56 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/22 16:39:58 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str != NULL)
	{
		while (i < len)
		{
			str[i] = src[i];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
