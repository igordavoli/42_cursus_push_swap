/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:08:29 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/21 23:52:45 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	del(void *lst)
{
	free(lst);
}

void	clear(t_push_swap *ps)
{
	ft_dlstclear(&(ps->a), *del);
	ft_dlstclear(&(ps->b), *del);
	ft_dlstclear(&(ps->op_lst_end), *del);
}
