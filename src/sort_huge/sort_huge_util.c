/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_huge_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:05:25 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/04 14:29:20 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	cost_stack_b(t_push_swap *ps, t_dlist *b_node, t_costpa *costpa)
{
	int		top_distance_b;
	t_dlist	*tmp;

	tmp = ps->b;
	top_distance_b = 0;
	while (tmp != b_node)
	{
		top_distance_b++;
		tmp = tmp->next;
	}
	if (top_distance_b > (ps->b_size / 2))
	{
		costpa->n_op_b = (ps->b_size - top_distance_b);
		costpa->op_b = "rrb";
	}
	else
	{
		costpa->n_op_b = top_distance_b;
		costpa->op_b = "rb";
	}
}

static void	cost_stack_a(t_push_swap *ps, t_dlist *b_node, t_costpa *costpa)
{
	int		top_distance_a;
	t_dlist	*tmp;

	top_distance_a = 0;
	tmp = ps->a;
	while (get_node_value(tmp) < get_node_value(b_node)
		|| get_node_value(tmp->prev) > get_node_value(b_node))
	{
		tmp = tmp->next;
		top_distance_a++;
	}
	if (top_distance_a > (ps->a_size / 2))
	{
		costpa->n_op_a = (ps->a_size - top_distance_a);
		costpa->op_a = "rra";
	}
	else
	{
		costpa->n_op_a = top_distance_a;
		costpa->op_a = "ra";
	}
}

static void	check_cost_pa(t_push_swap *ps, t_dlist *b_node)
{
	t_costpa	costpa;

	cost_stack_b(ps, b_node, &costpa);
	cost_stack_a(ps, b_node, &costpa);
	if ((costpa.n_op_a + costpa.n_op_b)
		< (ps->chepest.n_op_a + ps->chepest.n_op_b))
	{
		ps->chepest.n_op_a = costpa.n_op_a;
		ps->chepest.n_op_b = costpa.n_op_b;
		ps->chepest.op_a = costpa.op_a;
		ps->chepest.op_b = costpa.op_b;
	}
}

void	get_lower_pa_cost(t_push_swap *ps)
{
	t_dlist	*tmp;

	tmp = ps->b;
	check_cost_pa(ps, tmp);
	tmp = tmp->next;
	while (tmp != ps->b)
	{
		check_cost_pa(ps, tmp);
		tmp = tmp->next;
	}
}
