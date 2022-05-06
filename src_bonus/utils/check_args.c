/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 22:27:13 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/05 23:36:31 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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

static long	*convert_to_ld(char **argv, int size)
{
	int		i;
	long	*nums;

	nums = (long *)malloc(sizeof(long) * size);
	i = 0;
	while (i < size)
	{
		nums[i] = ft_atol(argv[i + 1]);
		if (nums[i] < INT_MIN || nums[i] > INT_MAX)
		{
			free(nums);
			return (NULL);
		}
		i++;
	}
	return (nums);
}

static int	is_sorted(long *nums, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (nums[i - 1] > nums[i])
			return (0);
		i++;
	}
	return (1);
}

static int	has_repeated(long *nums, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (nums[i] == nums[j++])
				return (1);
		}
		i++;
	}
	return (0);
}

long	*check_args(int argc, char **argv)
{
	long	*nums;

	if (argc < 3)
		exit(0);
	if (has_invalid_char(argv, argc - 1))
		ft_close(NULL, 1);
	nums = convert_to_ld(argv, argc -1);
	if (nums == NULL)
	{
		free(nums);
		ft_close(NULL, 1);
	}
	if (is_sorted(nums, argc - 1))
	{
		free(nums);
		exit(0);
	}
	if (has_repeated(nums, argc - 1))
	{
		free(nums);
		ft_close(NULL, 1);
	}
	return (nums);
}
