/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 22:55:45 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 23:31:31 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_set_null(t_push_swap *ps)
{
	ps->a = NULL;
	ps->b = NULL;
	ps->op_lst = NULL;
}

static void	create_lst(t_push_swap *ps, t_idxd *idxd)
{
	int		i;
	int		*tmp;

	i = 0;
	while (i < ps->a_size)
	{
		tmp = (int *)malloc(sizeof(int));
		*tmp = idxd[i].index;
		ft_cir_dlstadd_back(&ps->a, ft_cir_dlstnew((void *)tmp));
		i++;
	}
	free(idxd);
}

void	push_swap_init(t_push_swap *ps, t_idxd *idxd, int list_size)
{
	ft_set_null(ps);
	ps->a_size = list_size;
	ps->b_size = 0;
	ps->chepest.n_op_a = list_size;
	ps->chepest.n_op_b = list_size;
	ps->chepest.op_a = "";
	ps->chepest.op_b = "";
	create_lst(ps, idxd);
}
