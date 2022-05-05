/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_cir_dlst_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 00:18:27 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 13:46:54 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	is_cir_dlst_sorted(t_dlist *dlst)
{
	t_dlist	*beg;

	beg = dlst;
	dlst = dlst->next;
	while (dlst != beg)
	{
		if (get_node_value(dlst) < get_node_value(dlst->prev))
			return (0);
		dlst = dlst->next;
	}
	return (1);
}
