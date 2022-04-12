/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 05:16:59 by idavoli-          #+#    #+#             */
/*   Updated: 2022/03/31 21:46:45 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"


int	main(int argc, char **argv)
{
	int i;
	int	intls[11];

	i = 0;
	while (argv[i + 1])
	{
 		intls[i] = ft_atoi(argv[i + 1]);
		 i++;
	}
	ft_bubble_sort(intls, argc - 1);
	ft_printf("argc: %d\n", argc - 1);

	i = 0;
	while (i < argc - 1)
		ft_printf("%d\n", intls[i++]);
	return (0);
}
