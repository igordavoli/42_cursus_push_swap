/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:02:02 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/01 21:17:24 by idavoli-         ###   ########.fr       */
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


void	sort(t_push_swap *ps)
{
	if (ps->a_size == 2)
		sort_two(ps);
	if (ps->a_size <= 15)
		sort_few(ps);
	if (ps-> a_size <= 500)
		sort_huge(ps);
	else
		full_b(ps)	;
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
