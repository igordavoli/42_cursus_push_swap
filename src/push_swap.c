/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 05:16:59 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/20 00:00:50 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"
# include <stdio.h>

void print_lst(void *content)
{
	ft_printf("%d : %p\n", *(int *)content, content);
}

void del(void *lst)
{
	free(lst);
}

void	prints(t_push_swap *ps)
{
	t_dlist 		*last;
	t_dlist 		*first;
	int				*num;
	printf("%d\n", ft_cir_dlstsize(ps->a));
	printf("a:\n");
	ft_cir_dlstiter(ps->a, &print_lst);
	printf("b:\n");
	ft_cir_dlstiter(ps->b, &print_lst);
	printf("\n");
	// sa(&ps);
	pb(ps);
	printf("a:\n");
	ft_cir_dlstiter(ps->a, &print_lst);
		printf("b:\n");
	ft_cir_dlstiter(ps->b, &print_lst);
	ft_printf("\n");
	pa(ps);
	sa(ps);
	printf("a:\n");
	ft_cir_dlstiter(ps->a, &print_lst);
		printf("b:\n");
	ft_cir_dlstiter(ps->b, &print_lst);
	ft_printf("\n");

	last = ps->a->prev;
	num = (int *)last->content;
	printf("%d\n", *num);
	first = last->next;
	num = (int *)first->content;
	printf("%d\n", *num);
}

void sort_two(t_push_swap *ps)
{
	if (*(int *)ps->a->content > *(int *)(ps->a->next)->content)
		sa(ps);
}

void sort_three(t_push_swap *ps)
{
	int first;
	int second;
	int third;

	first = *(int *)ps->a->content;
	second = *(int *)(ps->a->next)->content;
	third = *(int *)(ps->a->prev)->content;
	if (first > second && second > third)
	{
		ra(ps);
		sa(ps);
	}
	if (first < second && third < first)
		rra(ps);
	if (first < second && first < third)
	{
		sa(ps);
		ra(ps);
	}
	if (first > second && first < third)
		sa(ps);
	if (first > second && first > third)
		ra(ps);
}

void	sort(t_push_swap *ps)
{
		if (ps->a_size == 2)
			sort_two(ps);
		if (ps->a_size == 3)
			sort_three(ps);
}

int	main(int argc, char **argv)
{
	t_push_swap ps;

	push_swap_init(&ps, argc, argv);
	// prints(&ps);
	ft_cir_dlstiter(ps.a, &print_lst);
	printf("\n");
	sort(&ps);
	ft_cir_dlstiter(ps.a, &print_lst);
	ft_dlstclear(&ps.a, *del);
	ft_dlstclear(&ps.b, *del);
	return (0);
}
