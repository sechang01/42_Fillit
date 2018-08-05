/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 11:04:20 by sechang           #+#    #+#             */
/*   Updated: 2018/07/31 21:33:52 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strnew(size_t size)
{
	char	*s1;

	if (!(s1 = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	ft_bdot(s1, size + 1);
	return (s1);
}
