/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:17:59 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/23 15:18:01 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*newstr;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	newstr = (char *)malloc((len + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	while (i < len && s[start] != '\0')
		newstr[i++] = s[start++];
	newstr[i] = '\0';
	return (newstr);
}

// int main()
// {
// 	char str[] = "1234567890";
// 	printf("%s", ft_substr(str, 11, 7));
// }
