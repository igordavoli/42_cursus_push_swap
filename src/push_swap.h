/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 05:16:59 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 19:50:16 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/src/libft.h"

# define SA = 0
# define SB = 1
# define SS = 2
# define PA = 3
# define PB = 4
# define RA = 5
# define RB = 6
# define RR = 7
# define RRA = 8
# define RRB = 9
# define RRR = 10

typedef struct s_idxd
{
	long int	num;
	int			index;
}	t_idxd;

typedef struct s_costpa
{
	int		n_op_a;
	char	*op_a;
	int		n_op_b;
	char	*op_b;
}	t_costpa;
typedef struct s_push_swap
{
	t_dlist		*a;
	int			a_size;
	t_dlist		*b;
	int			b_size;
	t_dlist		*op_lst;
	t_costpa	chepest;
	char		**ops;
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
void	push_swap_init(t_push_swap *ps, t_idxd *idxd, int list_size);
void	execute(t_push_swap *ps, char *op);
void	sort(t_push_swap *ps);
void	sort_two(t_push_swap *ps);
void	sort_three(t_push_swap *ps);
int		sort_few(t_push_swap *ps);
void	sort_huge(t_push_swap *ps);
void	clear(t_push_swap *ps);
void	ft_close(t_push_swap *ps, int code);
int		get_node_value(t_dlist *node);
int		is_cir_dlst_sorted(t_dlist *dlst);
void	execute_n(t_push_swap *ps, char *op, int n);
void	print_ops_dlst(t_dlist *ops);
int		get_target_index(t_dlist *dlst, char target);
void	improve_ops_dlst(t_push_swap *ps);
char	*get_op(t_dlist *node);

#endif
