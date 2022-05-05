/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   improve_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:04:17 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 19:44:50 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	substitute_node_pair( t_dlist **node, char *new_op)
{
	t_dlist	*swp;

	(*node)->prev->content = (new_op);
	(*node)->prev->next = (*node)->next;
	(*node)->next->prev = (*node)->prev;
	swp = (*node)->next;
	free(*node);
	*node = swp;
}

static int	improvable_r(t_dlist *node)
{
	return ((!ft_strncmp(get_op(node), "ra", 2)
			&& !ft_strncmp(get_op(node->prev), "rb", 2))
		|| (!ft_strncmp(get_op(node), "rb", 2)
			&& !ft_strncmp(get_op(node->prev), "ra", 2)));
}

static int	improvable_rr(t_dlist *node)
{
	return ((!ft_strncmp(get_op(node), "rra", 3)
			&& !ft_strncmp(get_op(node->prev), "rrb", 3))
		|| (!ft_strncmp(get_op(node), "rrb", 3)
			&& !ft_strncmp(get_op(node->prev), "rra", 3)));
}

static int	improvable_s(t_dlist *node)
{
	return ((!ft_strncmp(get_op(node), "sa", 2)
			&& !ft_strncmp(get_op(node->prev), "sb", 2))
		|| (!ft_strncmp(get_op(node), "sb", 2)
			&& !ft_strncmp(get_op(node->prev), "sa", 2)));
}

void	improve_ops_dlst(t_push_swap *ps)
{
	t_dlist	*tmp;

	tmp = ps->op_lst->next;
	while (tmp && tmp->next)
	{
		if (improvable_r(tmp))
			substitute_node_pair(&tmp, "rr");
		else if (improvable_rr(tmp))
			substitute_node_pair(&tmp, "rrr");
		else if (improvable_s(tmp))
			substitute_node_pair(&tmp, "ss");
		else
			tmp = tmp->next;
	}
}
