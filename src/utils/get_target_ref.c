/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_target_ref.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:31:50 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/04 14:21:18 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_dlist	*get_target_ref(t_dlist *dlst, char target)
{
	int		i;
	int		smaller_value;
	t_dlist	*smaller_ref;
	t_dlist	*beg;

	beg = dlst;
	smaller_value = get_node_value(beg);
	smaller_ref = dlst;
	dlst = dlst->next;
	i = 1;
	while (beg != dlst)
	{
		if ((get_node_value(dlst) < smaller_value && target == 's' )
			|| (get_node_value(dlst) > smaller_value && target == 'b'))
		{
			smaller_value = get_node_value(dlst);
			smaller_ref = dlst;
		}
		dlst = dlst->next;
		i++;
	}
	return (smaller_ref);
}
