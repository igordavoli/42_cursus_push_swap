/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:20:52 by idavoli-          #+#    #+#             */
/*   Updated: 2022/03/23 01:34:05 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	ft_atoi(const char *str)
{
	int	num;
	int	sig;

	num = 0;
	sig = 1;
	while (is_space(*str))
		str++;
	if (ft_isdigit(*str) || *str == '-' || *str == '+')
	{
		if (*str == '-')
			sig = -1;
		if (*str == '+' || *str == '-')
			str++;
		while (ft_isdigit(*str))
		{
			num *= 10;
			num += *str - '0';
			str++;
		}
	}
	return (num * sig);
}
