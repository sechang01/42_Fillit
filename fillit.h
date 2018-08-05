/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 19:43:59 by sechang           #+#    #+#             */
/*   Updated: 2018/08/04 00:23:01 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

typedef struct	s_block
{
	int		hashpos[4];
	int		boardsize;
	int		len;
	int		rhash;
	char	placed;
	char	*daboard;
}				t_block;

int				main(int argc, char	**argv);
void			ft_error(void);
char			**ft_blocksplit(char *str, int numblocks);
void			ft_blockxblock(char **blockarr, int numblocks, int i, int j);
t_block			*ft_idblock(char **blockarr, int numblocks);
int				ft_startsize(t_block *list, int numblocks);
int				ft_solve(t_block *list, int numblocks, int boardsize,\
				int shift);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
size_t			ft_strlen(const char *str);
char			*ft_strtrim(char const *s);
char			*ft_strstr(const char *haystack, const char *needle);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strnew(size_t size);
void			ft_bdot(void *s, size_t n);
t_block			ft_a(void);
t_block			ft_b(void);
t_block			ft_c(void);
t_block			ft_d(void);
t_block			ft_e(void);
t_block			ft_f(void);
t_block			ft_g(void);
t_block			ft_h(void);
t_block			ft_i(void);
t_block			ft_j(void);
t_block			ft_k(void);
t_block			ft_l(void);
t_block			ft_m(void);
t_block			ft_n(void);
t_block			ft_o(void);
t_block			ft_p(void);
t_block			ft_q(void);
t_block			ft_r(void);
t_block			ft_s(void);

#endif
