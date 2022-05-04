/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_huge_no_that_good.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 22:29:22 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/04 14:17:32 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	quick_stack_a(t_push_swap *ps, int f, int i)
{
	int	ref;
	int	a_init_size;

	if (!ps->a_size)
		return (0);
	ref = f * i;
	a_init_size = ps->a_size;
	if (get_node_value(ps->a) < ref)
		execute(ps, "pb");
	else
		execute(ps, "ra");
	while (ps->a_size > a_init_size - f)
	{
		if (get_node_value(ps->a) < ref)
			execute(ps, "pb");
		else
			execute(ps, "ra");
	}
	return (0);
}

int	quick_stack_b(t_push_swap *ps)
{
	t_dlist	*beg;
	int		ref;

	if (!ps->b_size)
		return (0);
	ref = ps->b_size / 2;
	beg = ps->b;
	if (get_node_value(ps->b) < ref)
		execute(ps, "rb");
	else
		execute(ps, "pa");
	while (ps->b != beg)
	{
		if (get_node_value(ps->b) < ref)
			execute(ps, "rb");
		else
			execute(ps, "pa");
	}
	return (0);
}

void	sort_huge_no_that_good(t_push_swap *ps)
{
	int	i;
	int	f;

	if (ps->a_size <= 100)
		f = 15;
	else if (ps->a_size <= 500)
		f = 40;
	else if (ps->a_size <= 1000)
		f = 50;
	i = 1;
	while (ps->a_size > f)
		quick_stack_a(ps, f, i++);
	while (ps->a_size)
		execute(ps, "pb");
	sort_few_b(ps);
}
