/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:02:02 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/21 23:55:05 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_push_swap *ps)
{
	if (ps->a_size == 2)
		sort_two(ps);
	if (ps->a_size == 3)
		sort_three(ps);
}