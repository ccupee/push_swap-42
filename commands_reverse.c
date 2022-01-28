/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:46:39 by spgibber          #+#    #+#             */
/*   Updated: 2022/01/28 16:46:41 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **lst, int k)
{	
	t_list	*cur;
	int		i;
	int		size;

	if (!*lst || !(*lst)->next)
		return ;
	i = 0;
	cur = *lst;
	size = ft_lstsize(cur);
	while (++i < size)
		ft_ra(lst, 0);
	if (k == 1)
		ft_putendl_fd("rra", 1);
}

void	ft_rrb(t_list **lst, int k)
{
	t_list	*cur;
	int		i;
	int		size;

	if (!*lst || !(*lst)->next)
		return ;
	i = 0;
	cur = *lst;
	size = ft_lstsize(cur);
	while (++i < size)
		ft_rb(lst, 0);
	if (k == 1)
		ft_putendl_fd("rrb", 1);
}

void	ft_rrr(t_list **lst_a, t_list **lst_b)
{
	ft_rra(lst_a, 0);
	ft_rrb(lst_b, 0);
	ft_putendl_fd("rrr", 1);
}
