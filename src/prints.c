/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:06:20 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/01 00:56:28 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void	print_lst(void *content)
{
	ft_printf("%d : %p\n", *(int *)content, content);
}

// void	print_lst(void *content)
// {
// 	int i;

// 	i = 0;
// 	while (i++ < *(int *)content)
// 		ft_printf("-");
// 	ft_printf("\n");
// }
void	prints(t_push_swap *ps)
{
	printf("a:\n");
	printf("size: %d\n",ps->a_size);
	ft_cir_dlstiter(ps->a, &print_lst);
	printf("b:\n");
	printf("size: %d\n",ps->b_size);
	ft_cir_dlstiter(ps->b, &print_lst);
	printf("\n");
}



