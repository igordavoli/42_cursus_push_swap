/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:02:02 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/03 00:40:19 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"



void	full_b(t_push_swap *ps)
{
	int	max;

	max = ps->a_size -1;
	while (ps->a_size > 2)
	{
		if(get_node_value(ps->a) == 0 || get_node_value(ps->a) == max)
			execute(ps,"ra");
		else
			execute(ps,"pb");
		if (get_node_value(ps->b) > max / 2)
			execute(ps,"rb");
	}
}

void	check_cost_pa(t_push_swap *ps, t_dlist *b_node)
{
	int top_distance_a;
	int top_distance_b;
	t_costpa	costpa;
	t_dlist	*tmp;

	tmp = ps->b;
	top_distance_b = 0;
	while (tmp != b_node)
	{
		top_distance_b++;
		tmp = tmp->next;
	}
	if (top_distance_b > ps->b_size / 2)
	{
	 	costpa.n_op_b = ps->b_size - top_distance_b;
	 	costpa.op_b = "rrb";

	}
	else
	{
		costpa.n_op_b = top_distance_b;
		costpa.op_b = "rb";
	}
	top_distance_a = 0;
	tmp = ps->a;
	while(get_node_value(tmp) < get_node_value(b_node))
	{
		tmp = tmp->next;
		top_distance_a++;
	}
	if (top_distance_a > ps->a_size / 2)
	{
	 	costpa.n_op_a = ps->a_size - top_distance_a;
	 	costpa.op_a = "rra";
	}
	else
	{
		costpa.n_op_a = top_distance_a;
		costpa.op_a = "ra";
	}
	if ((costpa.n_op_a + costpa.n_op_b) < (ps->chepest.n_op_a + ps->chepest.n_op_b))
	{
		ps->chepest.n_op_a = costpa.n_op_a;
		ps->chepest.n_op_b = costpa.n_op_b;
		ps->chepest.op_a = costpa.op_a;
		ps->chepest.op_b = costpa.op_b;
	}
	// ft_printf("op_a: %d %s\nop_b: %d %s\n\n",ps->chepest.n_op_a , ps->chepest.op_a, ps->chepest.n_op_b, ps->chepest.op_b);
	ft_printf("op_a: %d %s\nop_b: %d %s\n\n",costpa.n_op_a, costpa.op_a, costpa.n_op_b, costpa.op_b);


}

void	get_lower_pa_cost(t_push_swap *ps)
{
	t_dlist *tmp;

	tmp = ps->b;
	check_cost_pa(ps, tmp);
	tmp = tmp->next;
	while (tmp != ps->b)
	{
		check_cost_pa(ps, tmp);
		tmp = tmp->next;
	}
}

void move_pa_cheaper(t_push_swap *ps)
{
	get_lower_pa_cost(ps);
}

void	sort(t_push_swap *ps)
{
	// if (ps->a_size == 2)
	// 	sort_two(ps);
	// if (ps->a_size <= 15)
	// 	sort_few(ps);
	// if (ps-> a_size <= 500)
	// 	sort_huge(ps);
	// else
	// {
		full_b(ps);
		move_pa_cheaper(ps);
	// }
}


// void	sort_huge(t_push_swap *ps)
// {
// 	t_dlist	*beg;
// 	int chunk_size = 10;
// 	int chunk = 2;
// 	int initial_size = ps->a_size;

// 	beg = ps->a;
// 	if(get_node_value(ps->a) <= initial_size && get_node_value(ps->a) > initial_size - (chunk_size * chunk))
// 			execute(ps,"pb");
// 	else
// 		execute(ps,"ra");


// 	while (ps->a != beg)
// 	{
// 		if(get_node_value(ps->a) < initial_size - (chunk_size * (chunk - 1))&& get_node_value(ps->a) >= initial_size - (chunk_size * chunk))
// 			execute(ps,"pb");
// 		else
// 			execute(ps,"ra");
// 	}

// }
