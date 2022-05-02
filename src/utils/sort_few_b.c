/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:02:02 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/01 17:16:22 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	get_target_index(t_dlist *dlst, char target)
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
		if ((get_node_value(dlst) < smaller_value && target == 's' ) ||
			(get_node_value(dlst) > smaller_value && target== 'b') )
		{
			smaller_value = get_node_value(dlst);
			smaller_index = i;
		}
		dlst = dlst->next;
		i++;
	}
	return (smaller_index);
}

int	sort_few_b(t_push_swap *ps)
{
	int	big_i;
	int	last_i;

	while (ps->b_size)
	{
		big_i = get_target_index(ps->b, 'b');
		last_i = ps->b_size - 1;
		if (big_i <= (last_i / 2))
			execute_n(ps, "rb", big_i);
		else
			execute_n(ps, "rrb", last_i - big_i + 1);
		execute(ps, "pa");
	}
	execute_n(ps, "pa", ps->b_size);
	return (0);
}
