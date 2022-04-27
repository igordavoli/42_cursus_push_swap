/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 22:27:13 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/26 22:52:48 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	has_invalid_char(char **argv, int size)
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

long int	*convert_to_ld(char **argv, int size)
{
	int			i;
	long int	*arr;

	arr = (long int *)malloc(sizeof(long int) * size);
	i = 0;
	while (i < size)
	{
		arr[i] = ft_atol(argv[i + 1]);
		if (arr[i] < INT_MIN || arr[i] > INT_MAX)
		{
			free(arr);
			return (NULL);
		}
		i++;
	}
	return (arr);
}

int	is_sorted(long int *arr, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (arr[i - 1] > arr[i])
			return (0);
		i++;
	}
	return (1);
}

int	has_repeated(long int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j++])
				return (1);
		}
		i++;
	}
	return (0);
}

void	check_args(int argc, char **argv)
{
	long int	*tmp;

	if (argc < 3)
		exit(0);
	if (has_invalid_char(argv, argc - 1))
		ft_close(NULL, "invalid char!", 1);
	tmp = convert_to_ld(argv, argc -1);
	if (tmp == NULL)
	{
		free(tmp);
		ft_close(NULL, "out of limit value!", 1);
	}
	if (is_sorted(tmp, argc - 1))
	{
		free(tmp);
		exit(0);
	}
	if (has_repeated(tmp, argc - 1))
	{
		free(tmp);
		ft_close(NULL, "repeated number!", 1);
	}
}
