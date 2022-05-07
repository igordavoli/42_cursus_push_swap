/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:19:13 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/07 17:59:51 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	execute(t_check *checker, char *op, int len)
{
	if ((len == 2) && !ft_strncmp(op, "sa", 2))
		sa(checker);
	else if ((len == 2) && !ft_strncmp(op, "sb", 2))
		sb(checker);
	else if ((len == 2) && !ft_strncmp(op, "ss", 2))
		ss(checker);
	else if ((len == 2) && !ft_strncmp(op, "pa", 2))
		pa(checker);
	else if ((len == 2) && !ft_strncmp(op, "pb", 2))
		pb(checker);
	else if ((len == 2) && !ft_strncmp(op, "ra", 2))
		ra(checker);
	else if ((len == 2) && !ft_strncmp(op, "rb", 2))
		rb(checker);
	else if ((len == 3) && !ft_strncmp(op, "rra", 3))
		rra(checker);
	else if ((len == 3) && !ft_strncmp(op, "rrb", 3))
		rrb(checker);
	else if ((len == 3) && !ft_strncmp(op, "rrr", 3))
		rrr(checker);
	else if ((len == 2) && !ft_strncmp(op, "rr", 2))
		rr(checker);
	else
		ft_putstr_fd("Error\n", STDERR_FILENO);
}
