/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:06:27 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/25 16:06:28 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] != '\0' && s[i] == c)
				i++;
			continue ;
		}
		i++;
		if (s[i] == '\0')
			count++;
	}
	return (count);
}

static char	**ft_free(char **split)
{
	unsigned int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static int	ft_len(char const *s, char c)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static char	**ft_make_split(char const *s, unsigned int count, \
							char c, char **split)
{
	unsigned int	i;
	int				j;
	int				len;

	i = 0;
	len = 0;
	j = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		len = ft_len(s, c);
		split[i] = (char *)malloc(sizeof(char) * (ft_len(s, c) + 1));
		if (!split[i])
			ft_free(split);
		j = 0;
		while (j < len)
			split[i][j++] = *(s++);
		split[i][j] = '\0';
		i++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned int	count;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	count = ft_count(s, c);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	split = ft_make_split(s, count, c, split);
	return (split);
}
