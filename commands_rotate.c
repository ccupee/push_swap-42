#include "push_swap.h"

void	ft_ra(t_list	**lst)
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
	ft_putendl_fd("ra", 1);
}

void	ft_rb(t_list	**lst)
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
	ft_putendl_fd("rb", 1);
}

void	ft_rr(t_list	**lst_a, t_list	**lst_b)
{
    ft_ra(lst_a);
    ft_rb(lst_b);
    ft_putendl_fd("rr", 1);
}