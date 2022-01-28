/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:46:58 by spgibber          #+#    #+#             */
/*   Updated: 2022/01/28 16:47:00 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list **lst, int k)
{
	t_list	*cur;
	int		current;

	if (!*lst || !(*lst)->next)
		return ;
	cur = *lst;
	current = cur->value;
	while (cur->next)
	{
		cur->value = cur->next->value;
		cur = cur->next;
	}
	ft_lstlast(cur)->value = current;
	if (k == 1)
		ft_putendl_fd("ra", 1);
}

void	ft_rb(t_list **lst, int k)
{
	t_list	*cur;
	int		current;

	if (!*lst || !(*lst)->next)
		return ;
	cur = *lst;
	current = cur->value;
	while (cur->next)
	{
		cur->value = cur->next->value;
		cur = cur->next;
	}
	ft_lstlast(cur)->value = current;
	if (k == 1)
		ft_putendl_fd("rb", 1);
}

void	ft_rr(t_list	**lst_a, t_list	**lst_b)
{
	ft_ra(lst_a, 0);
	ft_rb(lst_b, 0);
	ft_putendl_fd("rr", 1);
}
