/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:50:20 by spgibber          #+#    #+#             */
/*   Updated: 2022/01/28 16:50:21 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct s_env
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		max;
	int		min;
	int		middle;
	int		a_size;
	int		b_size;
}	t_env;

void			ft_print(void);

void			ft_sort(int *array, int len);

int				ft_check_max_min(char *str);

int				ft_isnumber(char *str);

int				*ft_check_duplicates(int *array, int len);

int				*ft_make_sorted_int_array(char **array, int len);

int				*ft_make_int_array(char **array, int len);

void			ft_array_is_sorted(int *array, int *new_array, int len);

void			ft_make_stack(t_list *lst, int *array, int len);

void			ft_ra(t_env *env, int flag);

void			ft_rb(t_env *env, int flag);

void			ft_rr(t_env *env);

void			ft_sa(t_env *env, int flag);

void			ft_sb(t_env *env, int flag);

void			ft_ss(t_env *env);

void			ft_rra(t_env *env, int flag);

void			ft_rrb(t_env *env, int flag);

void			ft_rrr(t_env *env);

void			ft_pa(t_env *env, int flag);

void			ft_pb(t_env *env, int flag);

t_env			*set_env(int *array, int *sorted_array, int len);

void			b_score(t_env *env);

void			a_score(t_env *env);

void			push2b(t_env *env);

void			min_score_move(t_env *env, t_list *min_elem);

t_list			*find_min_elem(t_env *env);

void			push_swap(t_env *env);

void			push2a(t_env *env);

void			sort_three_b(t_env *env);

void			sort_three_a(t_env *env);

void			mini_sort_5(t_env *env);

void			final_sort_a(t_env *env);

void			mini_sort_4(t_env *env);

char			**make_array_str(char *str);

unsigned int	ft_count(char const *s, char c);

int				*ft_make_int_array_str(char **array, int len);

int				*ft_make_sorted_int_array_str(char **array, int len);

#endif