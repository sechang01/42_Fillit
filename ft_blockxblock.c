/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blockxblock.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 13:35:43 by sechang           #+#    #+#             */
/*   Updated: 2018/08/04 00:19:47 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_blockxblock(char **blockarr, int numblocks, int i, int j)
{
	int		row;
	int		xnects;

	while (i < numblocks && blockarr[i][j])
	{
		j = 0;
		row = (j / 4);
		xnects = 0;
		while ((j - (row * 4)) <= 3 && j < 15)
		{
			if (blockarr[i][j] == '#')
			{
				if (blockarr[i][j + 1] == '#' && (j + 1) % 4 != 0)
					xnects++;
				if (row <= 2 && blockarr[i][j + 4] == '#')
					xnects++;
			}
			j++;
			row = (j / 4);
		}
		if (xnects > 4 || xnects < 3)
			ft_error();
		i++;
	}
}
