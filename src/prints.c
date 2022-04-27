/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:06:20 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/26 23:10:50 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void	print_lst(void *content)
{
	ft_printf("%d : %p\n", *(int *)content, content);
}

void	prints(t_push_swap *ps)
{
	printf("%d\n", ft_cir_dlstsize(ps->a));
	printf("a:\n");
	ft_cir_dlstiter(ps->a, &print_lst);
	printf("b:\n");
	ft_cir_dlstiter(ps->b, &print_lst);
	printf("\n");
}
