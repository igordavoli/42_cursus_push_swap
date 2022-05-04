/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_target_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:31:50 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/04 14:22:04 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_target_index(t_dlist *dlst, char target)
{
	int		smaller_value;
	int		smaller_index;
	t_dlist	*beg;
	int		i;

	beg = dlst;
	smaller_value = get_node_value(beg);
	smaller_index = 0;
	dlst = dlst->next;
	i = 1;
	while (beg != dlst)
	{
		if ((get_node_value(dlst) < smaller_value && target == 's' )
			|| (get_node_value(dlst) > smaller_value && target == 'b'))
		{
			smaller_value = get_node_value(dlst);
			smaller_index = i;
		}
		dlst = dlst->next;
		i++;
	}
	return (smaller_index);
}
