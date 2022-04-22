/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 05:16:59 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/22 01:29:42 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	prints(t_push_swap *ps);

static void	ft_set_null(t_push_swap *ps)
{

	ps->argv_int = NULL;
	ps->a = NULL;
	ps->b = NULL;
	ps->op_lst_bgn = NULL;
	ps->op_lst_end = NULL;
}


int check_args(int argc, char **argv)
{
	int			i;
	int			j;
	long int	*tmp;

	if ((argc - 1) < 2)
		exit(0);
	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (argv[i + 1][j])
		{
			if (!ft_isdigit(argv[i + 1][j++]))
				ft_close(NULL, "invalid char!", 1);
		}
		i++;
	}

	tmp = (long int *)malloc(sizeof(long int) * (argc -1));
	i = 0;
	while (i < argc - 1)
	{
		tmp[i] = ft_atol(argv[i + 1]);
		if (  tmp[i] < INT_MIN || tmp[i] > INT_MAX)
		{
			free(tmp);
			ft_close(NULL, "out of limit value!", 1);
		}
		i++;
	}
	i = 1;
	while (i < argc - 1)
	{
		if (tmp[i - 1] > tmp [i])
		{
			free(tmp);
			return (0);
		}
		i++;
	}
		free(tmp);
		exit(0);
}

void	print_ops(void *content)
{
	ft_printf("%s\n", (char *)content);
}

int	main(int argc, char **argv)
{
	t_push_swap ps;
	ft_set_null(&ps);
	check_args(argc, argv);
	push_swap_init(&ps, argc, argv);
	sort(&ps);
	ft_dlstiter(ps.op_lst_end, &print_ops);
	clear(&ps);
	return (0);
}
