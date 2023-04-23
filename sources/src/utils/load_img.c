/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:01:47 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/23 22:34:45 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../mlx/mlx.h"
#include "push_swap_enum.h"
#include "push_swap_game.h"

char static	*path_img_num(int n)
{
	char	*nbr;
	char	*s1;
	char	*s2;

	nbr = ft_itoa(n);
	s1 = ft_strjoin("../sources/xpm/num/", nbr);
	s2 = ft_strjoin(s1, ".xpm");
	free(s1);
	free(nbr);
	return (s2);
}

void static	load_num(t_game *g)
{
	int		w;
	int		h;
	int		i;
	char	*path;

	i = 0;
	while (i < 10)
	{
		path = path_img_num(i);
		g->img.num[i] = mlx_xpm_file_to_image(g->mlx, path, &w, &h);
		free(path);
		i++;
	}
}

char static	*path_img(char *name_img, int type)
{
	char	*s1;
	char	*s2;

	s1 = ft_strjoin("../sources/xpm/button/", name_img);
	s2 = ft_strjoin(s1, "_");
	free(s1);
	if (type == UP)
		s1 = ft_strjoin(s2, "u");
	else
		s1 = ft_strjoin(s2, "d");
	free(s2);
	s2 = ft_strjoin(s1, ".xpm");
	free(s1);
	return (s2);
}

void static	load_img(t_game *g, char *name, int type)
{
	char	*path;
	int		w;
	int		h;

	path = path_img(name, DOWN);
	g->img.btt[type][DOWN] = mlx_xpm_file_to_image(g->mlx, path, &w, &h);
	free(path);
	path = path_img(name, UP);
	g->img.btt[type][UP] = mlx_xpm_file_to_image(g->mlx, path, &w, &h);
	free(path);
}

void	init_img_btt(t_game *g)
{
	load_img(g, "sa", SA);
	load_img(g, "sb", SB);
	load_img(g, "ss", SS);
	load_img(g, "pa", PA);
	load_img(g, "pb", PB);
	load_img(g, "ra", RA);
	load_img(g, "rb", RB);
	load_img(g, "rr", RR);
	load_img(g, "rra", RRA);
	load_img(g, "rrb", RRB);
	load_img(g, "rrr", RRR);
	load_num(g);
}

// "../sources/xpm/button/sa_d.xpm",
