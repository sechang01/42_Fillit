/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gamma.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:45:46 by sechang           #+#    #+#             */
/*   Updated: 2018/07/31 15:06:01 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_block		ft_k(void)
{
	t_block		tenone;

	tenone.hashpos[0] = 1;
	tenone.hashpos[1] = 4;
	tenone.hashpos[2] = 5;
	tenone.hashpos[3] = 7;
	tenone.rhash = 8;
	tenone.len = 2;
	tenone.boardsize = 3;
	return (tenone);
}

t_block		ft_l(void)
{
	t_block		tentwo;

	tentwo.hashpos[0] = 1;
	tentwo.hashpos[1] = 2;
	tentwo.hashpos[2] = 3;
	tentwo.hashpos[3] = 5;
	tentwo.rhash = 6;
	tentwo.len = 3;
	tentwo.boardsize = 3;
	return (tentwo);
}

t_block		ft_m(void)
{
	t_block		tenthree;

	tenthree.hashpos[0] = 2;
	tenthree.hashpos[1] = 4;
	tenthree.hashpos[2] = 5;
	tenthree.hashpos[3] = 8;
	tenthree.rhash = 8;
	tenthree.len = 2;
	tenthree.boardsize = 3;
	return (tenthree);
}

t_block		ft_n(void)
{
	t_block		tenfour;

	tenfour.hashpos[0] = 2;
	tenfour.hashpos[1] = 4;
	tenfour.hashpos[2] = 5;
	tenfour.hashpos[3] = 6;
	tenfour.rhash = 6;
	tenfour.len = 3;
	tenfour.boardsize = 3;
	return (tenfour);
}

t_block		ft_o(void)
{
	t_block		tenfive;

	tenfive.hashpos[0] = 1;
	tenfive.hashpos[1] = 2;
	tenfive.hashpos[2] = 3;
	tenfive.hashpos[3] = 4;
	tenfive.rhash = 4;
	tenfive.len = 2;
	tenfive.boardsize = 2;
	return (tenfive);
}
