/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 10:00:19 by sechang           #+#    #+#             */
/*   Updated: 2018/08/04 00:36:26 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_shift(t_block *list, int i, int bsize, int shift)
{
	int		j;
	int		key;
	int		bs;
	int		currhash;

	j = 0;
	key = 0;
	bs = (bsize - list[i].boardsize);
	currhash = (list[i].rhash + shift + (bs * (int)((list[i].rhash - 1)\
			/ list[i].boardsize)));
	if (currhash + 1 > bsize * bsize)
		return (-1);
	if (currhash - ((int)((currhash - 1) / bsize) * bsize) + 1 > bsize)
		key = 1;
	return (key == 1 ? (shift + list[i].len) : (shift + 1));
}

static void		ft_printboard(char *board, int boardsize)
{
	int		i;

	i = 0;
	while (i < (boardsize * boardsize))
	{
		write(1, &board[i], 1);
		if (i > 0 && ((i + 1) % boardsize) == 0)
			write(1, "\n", 1);
		i++;
	}
}

int				ft_hashchk(t_block *list, int bnum, int boardsize, int shift)
{
	int		j;
	int		i;
	int		bs;

	bs = (boardsize - list[bnum].boardsize);
	j = 0;
	i = 0;
	while (j <= 3)
	{
		if (list[0].daboard[list[bnum].hashpos[j] + shift + \
			(bs * (int)((list[bnum].hashpos[j] - 1) / list[bnum].boardsize))\
			- 1] != '.')
		{
			return (0);
		}
		j++;
	}
	while (j > 0)
	{
		list[0].daboard[list[bnum].hashpos[j - 1] + shift + (bs * (int)\
			((list[bnum].hashpos[j - 1] - 1) / \
			list[bnum].boardsize)) - 1] = bnum + 65;
		j--;
	}
	return (1);
}

static void		ft_inception(t_block *list, int bnum, int boardsize, int shift)
{
	int j;
	int bs;

	bs = (boardsize - list[bnum].boardsize);
	while (shift >= 0)
	{
		if (!list[bnum].hashpos[0])
			break ;
		if (ft_hashchk(list, bnum, boardsize, shift))
		{
			if (!ft_solve(list, bnum + 1, boardsize, 0))
			{
				j = 0;
				while (j <= 3)
				{
					list[0].daboard[list[bnum].hashpos[j] + shift + (bs * \
							(int)((list[bnum].hashpos[j] - 1) / list[bnum].\
								boardsize)) - 1] = '.';
					j++;
				}
			}
		}
		shift = ft_shift(list, bnum, boardsize, shift);
	}
}

int				ft_solve(t_block *list, int bnum, int boardsize, int shift)
{
	if (list[0].daboard[(boardsize - 1) * (boardsize - 1)] == '\0')
		list[0].daboard[(boardsize - 1) * (boardsize - 1)] = '.';
	list[0].daboard[boardsize * boardsize] = '\0';
	ft_inception(list, bnum, boardsize, shift);
	if (!list[bnum].hashpos[0])
	{
		ft_printboard(list[0].daboard, boardsize);
		exit(1);
	}
	if (bnum == 0)
		ft_solve(list, 0, boardsize + 1, 0);
	return (0);
}
