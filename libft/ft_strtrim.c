/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:20:31 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/23 15:20:32 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_eleminset(char elem, char const *set)
{
	while (*set != elem)
	{
		if (*set == '\0')
			return (0);
		set++;
	}
	return (1);
}	

static void	ft_another_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
	{
		str = malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	while (s1[start] != '\0' && ft_eleminset(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_eleminset(s1[end], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (NULL);
	ft_another_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}
