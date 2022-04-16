/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_cir.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 05:16:59 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/15 23:18:09 by idavoli-         ###   ########.fr       */
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

void create_lst(t_push_swap *ps)
{
	int		i;
	int		*swp;

	ps->stack_a = NULL;
	i = 0;
	while (i < ps->argc - 1)
	{
		swp = (int *)malloc(sizeof(int));
		*swp = ft_atoi(ps->argv[i + 1]);
		ft_cir_dlstadd_back(&ps->stack_a, ft_cir_dlstnew((void *)swp));
		i++;
	}
}

void	ft_set_null(t_push_swap *ps)
{
	ps->argc = 0;
	ps->argv = NULL;
	ps->stack_a = NULL;
	ps->stack_b = NULL;
}

void	ft_push_swap_init(t_push_swap *ps, int argc, char **argv)
{
	ps->argc = argc;
	ps->argv = argv;
	create_lst(ps);
}

int	main(int argc, char **argv)
{
	t_push_swap ps;
	t_dlist 		*last;
	t_dlist 		*first;
	int				*num;

	ps.argc = argc;
	ps.argv = argv;
	ft_set_null(&ps);
	ft_push_swap_init(&ps, argc, argv);
	printf("%d\n", ft_cir_dlstsize(ps.stack_a));
	ft_cir_dlstiter(ps.stack_a, &print_lst);
	ft_printf("\n");

	last = ps.stack_a->prev;
	num = (int *)last->content;
	printf("%d\n", *num);
	first = last->next;
	num = (int *)first->content;
	printf("%d\n", *num);

	ft_dlstclear(&ps.stack_a, *del);



	return (0);
}
