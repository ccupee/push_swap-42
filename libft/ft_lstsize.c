#include "libft.h"

int	ft_lstsize(t_list	*lst)
{
	int		size;
	t_list	*tmp;

	if (!lst)
		return (0);
	tmp = lst;
	size = 0;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}
	return (size);
}
