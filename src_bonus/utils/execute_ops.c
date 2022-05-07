/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:24:24 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/07 17:57:28 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	execute_ops(t_check *check)
{
	char	*tmp;

	tmp = NULL;
	while (1)
	{
		tmp = get_next_line(STDIN_FILENO, 0);
		if (tmp)
			execute(check, tmp, ft_strlen(tmp));
		else
			break ;
		free(tmp);
	}
}
