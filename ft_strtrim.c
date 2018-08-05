/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 16:02:31 by sechang           #+#    #+#             */
/*   Updated: 2018/08/03 00:15:22 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strtrim(char const *s)
{
	size_t		trimmarker1;
	size_t		trimmarker2;
	size_t		i;
	int			hashcount;

	if (!s)
		return (0);
	i = 0;
	while (s[i] == '.')
		i++;
	trimmarker1 = i;
	hashcount = 0;
	while (s[i])
	{
		if (s[i++] == '#')
			hashcount++;
	}
	if (hashcount != 4)
		ft_error();
	i--;
	while (s[i] == '.')
		i--;
	trimmarker2 = i + 1;
	return (ft_strsub(s, (unsigned int)trimmarker1, \
	(trimmarker2 - trimmarker1)));
}
