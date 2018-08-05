/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 19:50:07 by sechang           #+#    #+#             */
/*   Updated: 2018/08/04 18:42:31 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_mainthree(int fd, char *buf, int filelen)
{
	filelen--;
	if (buf[0] != '\n' && filelen > 0)
		ft_error();
	if (filelen > 0 && filelen % 21 == 0)
	{
		read(fd, buf, 1);
		if (buf[0] != '\n')
			ft_error();
		filelen--;
	}
	return (filelen);
}

static char		*ft_maintwo(int fd, char *buf, int i, int j)
{
	int		filelen;
	char	*allblocks;

	filelen = i;
	allblocks = (char *)malloc(sizeof(char) * ((((i + 1) \
						- ((i + 1) / 21) * .8)) + 1));
	while (filelen >= 0)
	{
		i = 1;
		while (i <= 4 && filelen > 0)
		{
			read(fd, buf, 1);
			if (buf[0] == '#' || buf[0] == '.')
				allblocks[j++] = buf[0];
			else
				ft_error();
			i++;
			filelen--;
		}
		read(fd, buf, 1);
		filelen = ft_mainthree(fd, buf, filelen);
	}
	allblocks[j] = '\0';
	return (allblocks);
}

int				main(int argc, char **argv)
{
	int		fd;
	char	*buf;
	int		filelen;
	t_block	*listoblocks;

	fd = 0;
	if (argc != 2 || (fd = open(argv[1], O_RDONLY)) < 1)
	{
		write(1, "usage: ./fillit teriminos.file\n", 31);
		exit(1);
	}
	buf = (char *)malloc(sizeof(char) * 550);
	filelen = read(fd, buf, 550);
	free(buf);
	if (filelen > 546 || ((filelen + 1) % 21 != 0))
		ft_error();
	buf = (char *)malloc(sizeof(char) * 1);
	close(fd);
	fd = open(argv[1], O_RDONLY);
	listoblocks = ft_idblock(ft_blocksplit(ft_maintwo(fd, buf, filelen, 0), \
				(filelen + 1) / 21), (filelen + 1) / 21);
	free(buf);
	close(fd);
	ft_solve(listoblocks, 0, ft_startsize(listoblocks, (filelen + 1) / 21), 0);
	return (0);
}
