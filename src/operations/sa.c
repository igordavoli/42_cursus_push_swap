/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:03:15 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/21 23:53:54 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_push_swap *ps)
{
	void	*swp;

	if (ps->a_size > 1)
	{
		swp = ps->a->content;
		ps->a->content = (ps->a->next)->content;
		(ps->a->next)->content = swp;
	}
}
