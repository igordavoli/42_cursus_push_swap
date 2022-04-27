/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 05:16:59 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/26 23:25:24 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prints(t_push_swap *ps);

static void	ft_set_null(t_push_swap *ps)
{
	ps->argv_int = NULL;
	ps->a = NULL;
	ps->b = NULL;
	ps->op_lst_bgn = NULL;
	ps->op_lst_end = NULL;
}

void	print_ops(void *content)
{
	ft_printf("%s\n", (char *)content);
}

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	ft_set_null(&ps);
	check_args(argc, argv);
	push_swap_init(&ps, argc, argv);
	sort(&ps);
	ft_dlstiter(ps.op_lst_end, &print_ops);
	clear(&ps);
	return (0);
}
