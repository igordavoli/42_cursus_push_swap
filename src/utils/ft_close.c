/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 00:37:06 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 13:50:53 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_close(t_push_swap *ps, int code)
{
	if (code)
		ft_putstr_fd("Error\n", STDERR_FILENO);
	if (ps)
	{
		clear(ps);
	}
	exit(1);
}
