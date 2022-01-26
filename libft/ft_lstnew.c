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
