/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:08:29 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 13:18:49 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

static void	del(void *lst)
{
	free(lst);
}

void	clear(t_check *check)
{
	ft_dlstclear(&(check->a), *del);
	ft_dlstclear(&(check->b), *del);
	ft_dlstclear(&(check->op_lst), *del);
}
