/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:24:24 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 23:35:49 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	execute_ops(t_check *check)
{
	t_dlist	*tmp;

	tmp = check->op_lst;
	while (tmp)
	{
		execute(check, (char *)tmp->content);
		tmp = tmp->next;
	}
}
