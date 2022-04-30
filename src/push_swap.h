/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 05:16:59 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/30 00:24:20 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/src/libft.h"

typedef struct s_idxd
{
	long int	num;
	int			index;
}	t_idxd;
typedef struct s_push_swap
{
	t_idxd	*idxd;
	t_dlist	*a;
	int		a_size;
	t_dlist	*b;
	int		b_size;
	t_dlist	*op_lst_bgn;
	t_dlist	*op_lst_end;
}	t_push_swap;

void	sa(t_push_swap *ps);
void	sb(t_push_swap *ps);
void	ss(t_push_swap *ps);
void	pa(t_push_swap *ps);
void	pb(t_push_swap *ps);
void	rb(t_push_swap *ps);
void	ra(t_push_swap *ps);
void	rb(t_push_swap *ps);
void	rr(t_push_swap *ps);
void	rra(t_push_swap *ps);
void	rrb(t_push_swap *ps);
void	rrr(t_push_swap *ps);
t_idxd	*check_args(int argc, char **argv);
void	indexer(t_idxd *idxd, int size);
void	push_swap_init(t_push_swap *ps, int list_size);
void	execute(t_push_swap *ps, char *op);
void	sort(t_push_swap *ps);
void	sort_two(t_push_swap *ps);
void	sort_three(t_push_swap *ps);
int		sort_few(t_push_swap *ps);
void	clear(t_push_swap *ps);
void	ft_close(t_push_swap *ps, int code);
int		get_node_value(t_dlist *node);
int		is_cir_dlst_sorted(t_dlist *dlst);
void	execute_n(t_push_swap *ps, char *op, int n);
#endif
