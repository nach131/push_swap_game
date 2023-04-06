/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_chip_old.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:35:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/06 12:47:05 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../mlx/mlx.h"
#include "push_swap_game.h"

char static	*path_img_chip(char *name_img, int type)
{
	char	*s1;
	char	*s2;

	s1 = ft_strjoin("../sources/xpm/chip/", name_img);
	s2 = ft_strjoin(s1, "_");
	free(s1);
	if (type == START)
		s1 = ft_strjoin(s2, "s");
	else if (type == END)
		s1 = ft_strjoin(s2, "e");
	else
		s1 = ft_strjoin(s2, "m");
	free(s2);
	s2 = ft_strjoin(s1, ".xpm");
	free(s1);
	return (s2);
}

void	load_img_chip(t_game *g, char *name, int type)
{
	char	*path;
	int		w;
	int		h;

	path = path_img_chip(name, START);
	g->img.chip[type][START] = mlx_xpm_file_to_image(g->mlx, path, &w, &h);
	free(path);
	path = path_img_chip(name, END);
	g->img.chip[type][END] = mlx_xpm_file_to_image(g->mlx, path, &w, &h);
	free(path);
	path = path_img_chip(name, MIDDLE);
	g->img.chip[type][MIDDLE] = mlx_xpm_file_to_image(g->mlx, path, &w, &h);
	free(path);
}

void	init_img_chip(t_game *g)
{
	load_img_chip(g, "orange", CORANGE);
}
