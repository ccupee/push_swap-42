#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, int (*f)(int), void (*del)(int))
{
	t_list	*new;
	t_list	*temp;

	new = NULL;
	if (!lst)
		return (new);
	while (lst)
	{
		temp = ft_lstnew(f(lst->value));
		if (!temp)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}
