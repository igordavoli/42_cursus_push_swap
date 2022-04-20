/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:03:15 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/18 20:29:21 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_push_swap *ps)
{
	t_dlist	*last;
	t_dlist	*b_first;
	t_dlist	*second;

	if (ps->b_size)
	{
		last = ps->b->prev;
		b_first = ps->b;
		second = ps->b->next;
		last->next = second;
		second->prev = last;
		ft_cir_dlstadd_front(&ps->a, b_first);
		ps->b_size--;
		ps->a_size++;
		if (ps->b_size)
			ps->b = second;
		else
			ps->b = NULL;
	}
}
