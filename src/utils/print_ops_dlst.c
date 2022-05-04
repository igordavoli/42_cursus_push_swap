/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ops_dlst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:18:03 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/04 14:22:28 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	print_ops(void *content)
{
	ft_printf("%s\n", (char *)content);
}

void	print_ops_dlst(t_dlist *ops)
{
	ft_dlstiter(ops, &print_ops);
}
