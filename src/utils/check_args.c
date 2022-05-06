/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 22:27:13 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 23:40:10 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	has_invalid_char(char **argv, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (argv[i + 1][j])
		{
			if (!ft_isdigit(argv[i + 1][j])
				&& argv[i + 1][j] != '-'
				&& argv[i + 1][j] != '+')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static t_idxd	*convert_to_ld(char **argv, int size)
{
	int			i;
	t_idxd		*idxd;

	idxd = (t_idxd *)malloc(sizeof(t_idxd) * size);
	i = 0;
	while (i < size)
	{
		idxd[i].num = ft_atol(argv[i + 1]);
		if (idxd[i].num < INT_MIN || idxd[i].num > INT_MAX)
		{
			free(idxd);
			return (NULL);
		}
		idxd[i].index = -1;
		i++;
	}
	return (idxd);
}

static int	is_sorted(t_idxd *idxd, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (idxd[i - 1].num > idxd[i].num)
			return (0);
		i++;
	}
	return (1);
}

static int	has_repeated(t_idxd *idxd, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (idxd[i].num == idxd[j++].num)
				return (1);
		}
		i++;
	}
	return (0);
}

t_idxd	*check_args(int argc, char **argv)
{
	t_idxd	*idxd;

	if (argc < 3)
		exit(0);
	if (has_invalid_char(argv, argc - 1))
		ft_close(NULL, 1);
	idxd = convert_to_ld(argv, argc -1);
	if (idxd == NULL)
	{
		free(idxd);
		ft_close(NULL, 1);
	}
	if (is_sorted(idxd, argc - 1))
	{
		free(idxd);
		exit(0);
	}
	if (has_repeated(idxd, argc - 1))
	{
		free(idxd);
		ft_close(NULL, 1);
	}
	indexer(idxd, argc - 1);
	return (idxd);
}
