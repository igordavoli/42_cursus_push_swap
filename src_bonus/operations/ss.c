/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:03:15 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 02:17:15 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ss(t_check *ps)
{
	if (ps->a_size > 1 && ps->b_size > 1)
	{
		sa(ps);
		sb(ps);
	}
}
