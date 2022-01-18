/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:00:14 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/22 17:00:16 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	*str1;
	size_t	c;
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s2);
	str1 = (char *)s1;
	if (s_len == 0 || s1 == s2)
		return (str1);
	if (ft_strlen(str1) == 0)
		return (NULL);
	while (str1[i] != '\0' && i < ft_strlen(str1))
	{
		c = 0;
		while (str1[i + c] != '\0' && s2[c] == str1[i + c] \
			&& s2[c] != '\0' && i + c < len)
			c++;
		if (c == s_len)
			return (str1 + i);
		i++;
	}
	return (0);
}
