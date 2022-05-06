/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 05:16:59 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 23:33:54 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_check	check;

	set_null(&check);
	create_lst(&check, check_args(argc, argv), argc - 1);
	get_ops_lst(&check);
	execute_ops(&check);
	if (check_sort(&check))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	clear(&check);
	return (0);
}
