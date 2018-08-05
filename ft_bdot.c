/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bdot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 11:04:44 by sechang           #+#    #+#             */
/*   Updated: 2018/07/31 21:34:06 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_bdot(void *s, size_t n)
{
	char	*ptrs;
	size_t	counter;

	ptrs = s;
	counter = 0;
	while (counter < (n - 1))
		*(ptrs + counter++) = '.';
	*(ptrs + counter) = '\0';
}
