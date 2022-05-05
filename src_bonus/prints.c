/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:06:20 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 13:16:17 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "checker.h"

void	print_lst(void *content)
{
	ft_printf("%d : %p\n", *(int *)content, content);
}
void	print_ops(void *content)
{
	ft_printf("%s\n", (char *)content);
}

// void	print_lst(void *content)
// {
// 	int i;

// 	i = 0;
// 	while (i++ < *(int *)content)
// 		ft_printf("-");
// 	ft_printf("\n");
// }
void	prints(t_check *check)
{
	printf("a:\n");
	ft_cir_dlstiter(check->a, &print_lst);
	printf("b:\n");
	ft_cir_dlstiter(check->b, &print_lst);
	printf("\n");
	printf("ops:\n");
	ft_dlstiter(check->op_lst, &print_ops);
}



