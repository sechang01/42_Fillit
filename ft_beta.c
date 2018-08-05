/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_beta.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:44:52 by sechang           #+#    #+#             */
/*   Updated: 2018/07/31 21:16:34 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_block		ft_f(void)
{
	t_block		six;

	six.hashpos[0] = 1;
	six.hashpos[1] = 2;
	six.hashpos[2] = 3;
	six.hashpos[3] = 4;
	six.rhash = 6;
	six.len = 3;
	six.boardsize = 3;
	return (six);
}

t_block		ft_g(void)
{
	t_block		seven;

	seven.hashpos[0] = 2;
	seven.hashpos[1] = 5;
	seven.hashpos[2] = 7;
	seven.hashpos[3] = 8;
	seven.rhash = 8;
	seven.len = 2;
	seven.boardsize = 3;
	return (seven);
}

t_block		ft_h(void)
{
	t_block		eight;

	eight.hashpos[0] = 1;
	eight.hashpos[1] = 4;
	eight.hashpos[2] = 5;
	eight.hashpos[3] = 6;
	eight.rhash = 6;
	eight.len = 3;
	eight.boardsize = 3;
	return (eight);
}

t_block		ft_i(void)
{
	t_block		nine;

	nine.hashpos[0] = 1;
	nine.hashpos[1] = 2;
	nine.hashpos[2] = 4;
	nine.hashpos[3] = 7;
	nine.rhash = 8;
	nine.len = 2;
	nine.boardsize = 3;
	return (nine);
}

t_block		ft_j(void)
{
	t_block		ten;

	ten.hashpos[0] = 1;
	ten.hashpos[1] = 2;
	ten.hashpos[2] = 3;
	ten.hashpos[3] = 6;
	ten.rhash = 6;
	ten.len = 3;
	ten.boardsize = 3;
	return (ten);
}
