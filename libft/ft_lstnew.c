/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:14:52 by spgibber          #+#    #+#             */
/*   Updated: 2022/01/28 15:14:54 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*result;

	result = (t_list *) malloc(sizeof(t_list));
	if (result)
	{
		result->value = content;
		result->next = NULL;
	}
	return (result);
}
