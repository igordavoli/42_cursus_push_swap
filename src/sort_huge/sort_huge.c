/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_huge.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:34:52 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/04 14:31:11 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_lower_pa_cost(t_push_swap *ps);

static void	full_b(t_push_swap *ps)
{
	int	max;

	max = ps->a_size -1;
	while (ps->a_size > 2)
	{
		if (get_node_value(ps->a) == 0 || get_node_value(ps->a) == max)
			execute(ps, "ra");
		else
			execute(ps, "pb");
		if (ps->b_size && get_node_value(ps->b) > max / 2)
			execute(ps, "rb");
		if (is_cir_dlst_sorted(ps->a))
			break ;
	}
}

static void	execute_ops(t_push_swap *ps)
{
	execute_n(ps, ps->chepest.op_a, ps->chepest.n_op_a);
	execute_n(ps, ps->chepest.op_b, ps->chepest.n_op_b);
	execute(ps, "pa");
}

static void	move_pa_cheapers(t_push_swap *ps)
{
	while (ps->b_size)
	{
		ps->chepest.n_op_a = ps->a_size;
		ps->chepest.n_op_b = ps->b_size;
		get_lower_pa_cost(ps);
		execute_ops(ps);
	}
}

static void	bring_smaller_to_top(t_push_swap *ps)
{
	int	small_i;
	int	last_i;

	small_i = get_target_index(ps->a, 's');
	last_i = ps->a_size - 1;
	if (small_i > (last_i / 2))
		execute_n(ps, "rra", last_i - small_i + 1);
	else
		execute_n(ps, "ra", small_i);
}

void	sort_huge(t_push_swap *ps)
{
	full_b(ps);
	move_pa_cheapers(ps);
	bring_smaller_to_top(ps);
}
