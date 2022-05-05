/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:19:13 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 15:49:46 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	execute(t_push_swap *ps, char *op)
{
	if (!ft_strncmp(op, "sa", 2))
		sa(ps);
	else if (!ft_strncmp(op, "sb", 2))
		sb(ps);
	else if (!ft_strncmp(op, "ss", 2))
		ss(ps);
	else if (!ft_strncmp(op, "pa", 2))
		pa(ps);
	else if (!ft_strncmp(op, "pb", 2))
		pb(ps);
	else if (!ft_strncmp(op, "ra", 2))
		ra(ps);
	else if (!ft_strncmp(op, "rb", 2))
		rb(ps);
	else if (!ft_strncmp(op, "rra", 3))
		rra(ps);
	else if (!ft_strncmp(op, "rrb", 3))
		rrb(ps);
	else if (!ft_strncmp(op, "rrr", 3))
		rrr(ps);
	else if (!ft_strncmp(op, "rr", 2))
		rr(ps);
	ft_dlstadd_back(&(ps->op_lst), ft_dlstnew(op));
}
