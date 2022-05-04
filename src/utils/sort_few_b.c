/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:02:02 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/04 10:52:11 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
