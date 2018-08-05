/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blocksplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 14:08:16 by sechang           #+#    #+#             */
/*   Updated: 2018/08/04 00:19:06 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_blocksplit(char *str, int numblocks)
{
	char	**blockarr;
	int		k;
	int		i;

	if (!(blockarr = (char **)malloc(sizeof(char *) * (numblocks + 1))))
		return (NULL);
	k = 0;
	i = 0;
	while (i < numblocks)
	{
		blockarr[k] = ft_strsub(str, k * 16, 16);
		k++;
		i++;
	}
	ft_blockxblock(blockarr, numblocks, 0, 0);
	return (blockarr);
}
