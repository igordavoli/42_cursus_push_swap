/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 05:16:59 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 19:49:23 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prints(t_push_swap *ps);

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	push_swap_init(&ps, check_args(argc, argv), argc - 1);
	sort(&ps);
	improve_ops_dlst(&ps);
	print_ops_dlst(ps.op_lst);
	clear(&ps);
	return (0);
}
