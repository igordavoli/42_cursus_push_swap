/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 05:16:59 by idavoli-          #+#    #+#             */
/*   Updated: 2022/04/16 19:01:44 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/src/libft.h"

typedef struct s_push_swap
{
	int		argc;
	char	**argv;
	t_dlist	*a;
	int		a_size;
	t_dlist	*b;
	int		b_size;
}	t_push_swap;

void	sa(t_push_swap *ps);
void	sb(t_push_swap *ps);
void	pa(t_push_swap *ps);
void	pb(t_push_swap *ps);
void	rb(t_push_swap *ps);
void	rr(t_push_swap *ps);
void	rra(t_push_swap *ps);
void	rrb(t_push_swap *ps);
void	rrr(t_push_swap *ps);

#endif
