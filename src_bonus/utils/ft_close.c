/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 00:37:06 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 13:51:12 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_close(t_check *check, int code)
{
	if (code)
		ft_putstr_fd("Error\n", STDERR_FILENO);
	if (check)
	{
		clear(check);
	}
	exit(1);
}
