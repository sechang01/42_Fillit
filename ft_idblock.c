/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_idblock.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 15:36:44 by sechang           #+#    #+#             */
/*   Updated: 2018/08/04 00:21:28 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_block		ft_tmp(void)
{
	t_block		tmp;

	tmp.hashpos[0] = 0;
	tmp.hashpos[1] = 0;
	tmp.hashpos[2] = 0;
	tmp.hashpos[3] = 0;
	tmp.rhash = 0;
	tmp.len = 0;
	tmp.boardsize = 0;
	return (tmp);
}

t_block				ft_matchmaker(char *n)
{
	t_block		blockstruction;

	blockstruction = (n) ? ft_tmp() : ft_tmp();
	blockstruction = !ft_strcmp("#...#...#...#", n) ? ft_a() : blockstruction;
	blockstruction = !ft_strcmp("####", n) ? ft_b() : blockstruction;
	blockstruction = !ft_strcmp("#...#...##", n) ? ft_c() : blockstruction;
	blockstruction = !ft_strcmp("#.###", n) ? ft_d() : blockstruction;
	blockstruction = !ft_strcmp("##...#...#", n) ? ft_e() : blockstruction;
	blockstruction = !ft_strcmp("###.#", n) ? ft_f() : blockstruction;
	blockstruction = !ft_strcmp("#...#..##", n) ? ft_g() : blockstruction;
	blockstruction = !ft_strcmp("#...###", n) ? ft_h() : blockstruction;
	blockstruction = !ft_strcmp("##..#...#", n) ? ft_i() : blockstruction;
	blockstruction = !ft_strcmp("###...#", n) ? ft_j() : blockstruction;
	blockstruction = !ft_strcmp("#...##..#", n) ? ft_k() : blockstruction;
	blockstruction = !ft_strcmp("###..#", n) ? ft_l() : blockstruction;
	blockstruction = !ft_strcmp("#..##...#", n) ? ft_m() : blockstruction;
	blockstruction = !ft_strcmp("#..###", n) ? ft_n() : blockstruction;
	blockstruction = !ft_strcmp("##..##", n) ? ft_o() : blockstruction;
	blockstruction = !ft_strcmp("##.##", n) ? ft_p() : blockstruction;
	blockstruction = !ft_strcmp("#...##...#", n) ? ft_q() : blockstruction;
	blockstruction = !ft_strcmp("##...##", n) ? ft_r() : blockstruction;
	blockstruction = !ft_strcmp("#..##..#", n) ? ft_s() : blockstruction;
	if (!blockstruction.boardsize)
		ft_error();
	return (blockstruction);
}

t_block				*ft_idblock(char **blockarr, int numblocks)
{
	t_block		*blockmm;
	char		*needle;
	int			i;

	i = 0;
	if (!(blockmm = (t_block *)malloc(sizeof(t_block) * (numblocks + 1))))
		return (NULL);
	while (i < numblocks)
	{
		needle = ft_strtrim(blockarr[i]);
		blockmm[i] = ft_matchmaker(needle);
		i++;
	}
	blockmm[0].daboard = ft_strnew(169);
	blockmm[i].hashpos[0] = 0;
	return (blockmm);
}
