/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_startsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 10:24:01 by sechang           #+#    #+#             */
/*   Updated: 2018/07/31 21:36:41 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_sqrt(int n)
{
	int		i;

	i = 0;
	while (i * i < n)
		i++;
	return (i * i > n ? i - 1 : i);
}

int				ft_startsize(t_block *list, int numblocks)
{
	int		i;
	int		largestsize;
	int		startingsize;

	i = 0;
	startingsize = 0;
	if (numblocks > 2)
	{
		startingsize = ft_sqrt(numblocks * 4);
	}
	largestsize = 0;
	if (numblocks >= 1 && numblocks <= 2)
	{
		while (list[i].hashpos[0])
		{
			if (list[i].boardsize > largestsize)
			{
				largestsize = list[i].boardsize;
			}
			i++;
		}
		startingsize = largestsize;
	}
	return (startingsize);
}
