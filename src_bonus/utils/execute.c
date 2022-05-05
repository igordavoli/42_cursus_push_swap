/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:19:13 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 13:50:19 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	execute(t_check *checker, char *op)
{
	if (!ft_strncmp(op, "sa", 2))
		sa(checker);
	else if (!ft_strncmp(op, "sb", 2))
		sb(checker);
	else if (!ft_strncmp(op, "ss", 2))
		ss(checker);
	else if (!ft_strncmp(op, "pa", 2))
		pa(checker);
	else if (!ft_strncmp(op, "pb", 2))
		pb(checker);
	else if (!ft_strncmp(op, "ra", 2))
		ra(checker);
	else if (!ft_strncmp(op, "rb", 2))
		rb(checker);
	else if (!ft_strncmp(op, "rra", 3))
		rra(checker);
	else if (!ft_strncmp(op, "rrb", 3))
		rrb(checker);
	else if (!ft_strncmp(op, "rrr", 3))
		rrr(checker);
	else if (!ft_strncmp(op, "rr", 2))
		rr(checker);
	else
		ft_putstr_fd("Error\n", STDERR_FILENO);
}
