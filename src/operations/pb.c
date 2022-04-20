/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:03:15 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/18 20:29:20 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_push_swap *ps)
{
	t_dlist	*last;
	t_dlist	*a_first;
	t_dlist	*second;

	if (ps->a_size)
	{
		last = ps->a->prev;
		a_first = ps->a;
		second = ps->a->next;
		last->next = second;
		second->prev = last;
		ft_cir_dlstadd_front(&ps->b, a_first);
		ps->a_size--;
		ps->b_size++;
		if (ps->a_size)
			ps->a = second;
		else
			ps->a = NULL;
	}
}
