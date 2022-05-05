/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:02:02 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/04 22:48:20 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_few(t_push_swap *ps)
{
	int	small_i;
	int	last_i;
	int	is_sorted;

	while (ps->a_size > 3)
	{
		small_i = get_target_index(ps->a, 's');
		last_i = ps->a_size - 1;
		if (small_i <= (last_i / 2))
			execute_n(ps, "ra", small_i);
		else
			execute_n(ps, "rra", last_i - small_i + 1);
		is_sorted = is_cir_dlst_sorted(ps->a);
		if (is_sorted && !ps->b_size)
			return (0);
		else if (is_sorted && ps->b_size)
		{
			execute_n(ps, "pa", ps->b_size);
			return (0);
		}
		execute(ps, "pb");
	}
	sort_three(ps);
	execute_n(ps, "pa", ps->b_size);
	return (0);
}
