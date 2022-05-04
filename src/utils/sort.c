/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:02:02 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/04 14:18:03 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_push_swap *ps)
{
	if (ps->a_size == 2)
		sort_two(ps);
	if (ps->a_size <= 10)
		sort_few(ps);
	else
		sort_huge(ps);
}
