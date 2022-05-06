/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:19:56 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 23:35:28 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	create_lst(t_check *check, long *nums, int size)
{
	int		i;
	int		*tmp;

	check->a_size = size;
	i = 0;
	while (i < size)
	{
		tmp = (int *)malloc(sizeof(int));
		*tmp = (int)nums[i];
		ft_cir_dlstadd_back(&check->a, ft_cir_dlstnew((void *)tmp));
		i++;
	}
	free(nums);
}
