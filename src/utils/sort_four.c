/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:02:02 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/28 22:27:29 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	get_smaller_index(t_dlist *dlst)
{
	int		smaller_value;
	int		smaller_index;
	t_dlist	*beg;
	int		i;

	beg = dlst;
	smaller_value = get_node_value(beg);
	smaller_index = 0;
	dlst = dlst->next;
	i = 1;
	while (beg != dlst)
	{
		if (get_node_value(dlst) < smaller_value)
		{
			smaller_value = get_node_value(dlst);
			smaller_index = i;
		}
		dlst = dlst->next;
		i++;
	}
	return (smaller_index);
}

void	sort_four(t_push_swap *ps)
{
	int	small_i;
	int	last_i;

	while (ps->a_size > 3)
	{
		small_i = get_smaller_index(ps->a);
		last_i = ps->a_size - 1;
		if (small_i <= (last_i / 2))
			execute_n(ps, "ra", small_i);
		else
			execute_n(ps, "rra", last_i - small_i + 1);
		execute(ps, "pb");
	}
	sort_three(ps);
	while (ps->b_size)
		execute(ps, "pa");
}
