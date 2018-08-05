/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alpha.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:36:00 by sechang           #+#    #+#             */
/*   Updated: 2018/07/31 21:31:42 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_block		ft_a(void)
{
	t_block		one;

	one.hashpos[0] = 1;
	one.hashpos[1] = 5;
	one.hashpos[2] = 9;
	one.hashpos[3] = 13;
	one.rhash = 13;
	one.len = 1;
	one.boardsize = 4;
	return (one);
}

t_block		ft_b(void)
{
	t_block		two;

	two.hashpos[0] = 1;
	two.hashpos[1] = 2;
	two.hashpos[2] = 3;
	two.hashpos[3] = 4;
	two.rhash = 4;
	two.len = 4;
	two.boardsize = 4;
	return (two);
}

t_block		ft_c(void)
{
	t_block		three;

	three.hashpos[0] = 1;
	three.hashpos[1] = 4;
	three.hashpos[2] = 7;
	three.hashpos[3] = 8;
	three.rhash = 8;
	three.len = 2;
	three.boardsize = 3;
	return (three);
}

t_block		ft_d(void)
{
	t_block		four;

	four.hashpos[0] = 3;
	four.hashpos[1] = 4;
	four.hashpos[2] = 5;
	four.hashpos[3] = 6;
	four.rhash = 6;
	four.len = 3;
	four.boardsize = 3;
	return (four);
}

t_block		ft_e(void)
{
	t_block		five;

	five.hashpos[0] = 1;
	five.hashpos[1] = 2;
	five.hashpos[2] = 5;
	five.hashpos[3] = 8;
	five.rhash = 8;
	five.len = 2;
	five.boardsize = 3;
	return (five);
}
