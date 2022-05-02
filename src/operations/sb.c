/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:03:15 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/01 16:34:21 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_push_swap *ps)
{
	void	*swp;

	if (ps->b_size > 1)
	{
		swp = ps->b->content;
		ps->b->content = (ps->b->next)->content;
		(ps->b->next)->content = swp;
	}
}
