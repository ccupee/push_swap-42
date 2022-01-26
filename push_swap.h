#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

void	ft_print();

void	ft_sort(int *array, int len);

int     ft_check_max_min(char *str);

int	    ft_isnumber(char *str);

int	    *ft_check_duplicates(int *array, int len);

int	    *ft_make_sorted_int_array(char **array, int len);

int	    *ft_make_int_array(char **array, int len);

void	ft_array_is_sorted(int *array, int *new, int len);

void	ft_make_node(int value, t_list **lst);

void	ft_make_stack(t_list *lst, int *array, int len);



#endif