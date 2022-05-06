/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ops_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:20:33 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 23:34:44 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	get_ops_lst(t_check *check)
{
	char	*tmp;

	tmp = NULL;
	while (1)
	{
		tmp = get_next_line(STDIN_FILENO, 0);
		if (tmp)
			ft_dlstadd_back(&check->op_lst, ft_dlstnew((void *)tmp));
		else
			break ;
	}
}
