/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 22:55:45 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/19 23:00:28 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static void	ft_set_null(t_push_swap *ps)
{
	ps->argc = 0;
	ps->argv = NULL;
	ps->a = NULL;
	ps->b = NULL;
}

static void create_lst(t_push_swap *ps)
{
	int		i;
	int		*swp;

	i = 0;
	while (i < ps->argc - 1)
	{
		swp = (int *)malloc(sizeof(int));
		*swp = ft_atoi(ps->argv[i + 1]);
		ft_cir_dlstadd_back(&ps->a, ft_cir_dlstnew((void *)swp));
		i++;
	}
}

void	push_swap_init(t_push_swap *ps, int argc, char **argv)
{
	ft_set_null(ps);
	ps->argc = argc;
	ps->argv = argv;
	ps->a_size = argc - 1;
	ps->b_size = 0;
	create_lst(ps);
}
