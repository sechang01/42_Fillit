/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 20:30:44 by sechang           #+#    #+#             */
/*   Updated: 2018/07/25 23:06:10 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		needle_len;
	int		needle_begin;

	i = 0;
	needle_len = 0;
	needle_begin = 0;
	while (needle[needle_len])
		needle_len++;
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		while (haystack[i + needle_begin] == needle[needle_begin])
		{
			if (needle_begin == needle_len - 1)
				return ((char *)haystack + i);
			needle_begin++;
		}
		needle_begin = 0;
		i++;
	}
	return (0);
}
