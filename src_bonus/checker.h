/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 05:16:59 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 23:35:09 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libs/libft/src/libft.h"

typedef struct s_check
{
	int			a_size;
	int			b_size;
	long		*nums;
	t_dlist		*a;
	t_dlist		*b;
	t_dlist		*op_lst;
}	t_check;

void	sa(t_check *ps);
void	sb(t_check *ps);
void	ss(t_check *ps);
void	pa(t_check *ps);
void	pb(t_check *ps);
void	rb(t_check *ps);
void	ra(t_check *ps);
void	rb(t_check *ps);
void	rr(t_check *ps);
void	rra(t_check *ps);
void	rrb(t_check *ps);
void	rrr(t_check *ps);
void	set_null(t_check *check);
long	*check_args(int argc, char **argv);
void	execute(t_check *ps, char *op);
void	clear(t_check *ps);
void	ft_close(t_check *ps, int code);
int		is_cir_dlst_sorted(t_dlist *dlst);
long	get_node_value(t_dlist *node);
void	get_ops_lst(t_check *check);
void	execute_ops(t_check *check);
void	create_lst(t_check *check, long *nums, int size);
int		check_sort(t_check *check);

#endif
