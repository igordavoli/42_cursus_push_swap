/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_null.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 22:55:45 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 23:36:50 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	set_null(t_check *check)
{
	check->b = NULL;
	check->a = NULL;
	check->b_size = 0;
	check->a_size = 0;
	check->op_lst = NULL;
	check->op_lst = NULL;
}
