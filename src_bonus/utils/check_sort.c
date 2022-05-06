/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:32:18 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 23:36:57 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	check_sort(t_check *check)
{
	if (check->b_size || !is_cir_dlst_sorted(check->a))
		return (0);
	return (1);
}
