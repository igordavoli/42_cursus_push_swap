/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:03:15 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/16 18:54:11 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_push_swap *ps)
{
	t_dlist	*last;
	t_dlist	*first;
	t_dlist	*second;
	t_dlist	*third;

	if (ps->b_size > 1)
	{
		last = ps->b->prev;
		first = ps->b;
		second = ps->b->next;
		third = ps->b->next->next;
		last->next = second;
		second->prev = last;
		second->next = first;
		first->prev = second;
		first->next = third;
		third->prev = first;
		ps->b = second;
	}
}
