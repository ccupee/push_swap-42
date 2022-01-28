/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:46:17 by spgibber          #+#    #+#             */
/*   Updated: 2022/01/28 16:46:19 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_list **lst_a, t_list **lst_b)
{
	t_list	*cur;

	if (!(*lst_b))
		return ;
	cur = *lst_b;
	*lst_b = (*lst_b)->next;
	ft_lstadd_front(lst_a, cur);
	ft_putendl_fd("pa", 1);
}

void	ft_pb(t_list **lst_a, t_list **lst_b)
{
	t_list	*cur;

	if (!(*lst_a))
		return ;
	cur = *lst_a;
	*lst_a = (*lst_a)->next;
	ft_lstadd_front(lst_b, cur);
	ft_putendl_fd("pb", 1);
}
