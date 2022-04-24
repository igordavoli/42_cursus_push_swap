/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 05:16:59 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/23 23:20:04 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/src/libft.h"

typedef struct s_push_swap
{
	int		*argv_int;
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
void	push_swap_init(t_push_swap *ps, int argc, char **argv);
void	execute(t_push_swap *ps, char *op);
void	sort(t_push_swap *ps);
void	sort_two(t_push_swap *ps);
void	sort_three(t_push_swap *ps);
void	sort_four(t_push_swap *ps);
void	clear(t_push_swap *ps);
void	ft_close(t_push_swap *ps, char *msg, int code);
#endif
