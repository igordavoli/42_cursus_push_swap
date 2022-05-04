/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 22:22:58 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/04 13:54:51 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	get_smaller_i_n_idxd(t_idxd *idxd, int size)
{
	int	i;
	int	smaller;
	int	smaller_i;

	i = 0;
	while (idxd[i].index != -1 && i < size)
			i++;
	smaller_i = i;
	smaller = idxd[i].num;
	while (i < size)
	{
		while (idxd[i].index != -1 && i < size - 1)
			i++;
		if (idxd[i].num < smaller && idxd[i].index == -1)
		{
			smaller = idxd[i].num;
			smaller_i = i;
		}
		i++;
	}
	return (smaller_i);
}

void	indexer(t_idxd *idxd, int size)
{
	int	i;

	i = 0;
	while (i < size)
		idxd[get_smaller_i_n_idxd(idxd, size)].index = i++;
}
