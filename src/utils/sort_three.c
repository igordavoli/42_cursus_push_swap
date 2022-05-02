/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:02:02 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/01 17:12:07 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	sort_a(t_push_swap *ps)
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
void	sort_b(t_push_swap *ps)
{
	int	first;
	int	second;
	int	third;

	first = *(int *)ps->a->content;
	second = *(int *)(ps->a->next)->content;
	third = *(int *)(ps->a->prev)->content;
	if (second > first && first > third)
		execute(ps, "sb");
	if (third > first && first > second)
		execute(ps, "rrb");
	if (second > third && third > first)
		execute(ps, "rb");
	if (first > third && third > second)
	{
		execute(ps, "rrb");
		execute(ps, "sb");
	}
	if (third > second && second > first)
	{
		execute(ps, "rb");
		execute(ps, "sb");
	}
}

void	sort_three(t_push_swap *ps, char stack)
{
	if(stack == 'a')
		sort_a(ps);
	else if (stack == 'b')
		sort_b(ps);
}
