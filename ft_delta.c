/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delta.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 15:06:05 by sechang           #+#    #+#             */
/*   Updated: 2018/07/31 15:35:07 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_block	ft_p(void)
{
	t_block		tensix;

	tensix.hashpos[0] = 2;
	tensix.hashpos[1] = 3;
	tensix.hashpos[2] = 4;
	tensix.hashpos[3] = 5;
	tensix.rhash = 6;
	tensix.len = 3;
	tensix.boardsize = 3;
	return (tensix);
}

t_block	ft_q(void)
{
	t_block		tenseven;

	tenseven.hashpos[0] = 1;
	tenseven.hashpos[1] = 4;
	tenseven.hashpos[2] = 5;
	tenseven.hashpos[3] = 8;
	tenseven.rhash = 8;
	tenseven.len = 2;
	tenseven.boardsize = 3;
	return (tenseven);
}

t_block	ft_r(void)
{
	t_block		teneight;

	teneight.hashpos[0] = 1;
	teneight.hashpos[1] = 2;
	teneight.hashpos[2] = 5;
	teneight.hashpos[3] = 6;
	teneight.rhash = 6;
	teneight.len = 3;
	teneight.boardsize = 3;
	return (teneight);
}

t_block	ft_s(void)
{
	t_block		tennine;

	tennine.hashpos[0] = 2;
	tennine.hashpos[1] = 4;
	tennine.hashpos[2] = 5;
	tennine.hashpos[3] = 7;
	tennine.rhash = 8;
	tennine.len = 2;
	tennine.boardsize = 3;
	return (tennine);
}
