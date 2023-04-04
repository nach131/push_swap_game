/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:01:47 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/04 16:26:25 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../mlx/mlx.h"
#include "push_swap_game.h"

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

void	load_img(t_game *g, char *name, int type)
{
	char	*path;
	int		w;
	int		h;

	path = path_img(name, DOWN);
	g->img.btt[type][DOWN] = mlx_xpm_file_to_image(g->mlx, path, &w, &h);
	free(path);
	path = path_img(name, UP);
	g->img.btt[type][UP] = mlx_xpm_file_to_image(g->mlx, path, &w, &h);
	// ft_printf(CYAN "%s\n", path);
	// ft_printf(MAGENTA "%s\n", path_img(name, UP));
	free(path);
}

void	init_img(t_game *g)
{
	load_img(g, "sa", SA);
	load_img(g, "pa", PA);
	load_img(g, "ra", RA);
	load_img(g, "rra", RRA);
}

// "../sources/xpm/button/sa_d.xpm",
