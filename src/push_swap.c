/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 05:16:59 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/30 18:23:56 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prints(t_push_swap *ps);

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	ps.idxd = check_args(argc, argv);
	push_swap_init(&ps, argc - 1);
	sort(&ps);
	print_ops_dlst(ps.op_lst_end);
	prints(&ps);
	clear(&ps);
	return (0);
}
