/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:02:02 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/04 22:47:50 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_push_swap *ps)
{
	int	first;
	int	second;
	int	third;

	first = *(int *)ps->a->content;
	second = *(int *)(ps->a->next)->content;
	third = *(int *)(ps->a->prev)->content;
	if (second < first && first < third)
		execute(ps, "sa");
	if (third < first && first < second)
		execute(ps, "rra");
	if (second < third && third < first)
		execute(ps, "ra");
	if (first < third && third < second)
	{
		execute(ps, "rra");
		execute(ps, "sa");
	}
	if (third < second && second < first)
	{
		execute(ps, "ra");
		execute(ps, "sa");
	}
}
