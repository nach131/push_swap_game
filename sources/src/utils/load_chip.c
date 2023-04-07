/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_chip.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:35:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/07 11:13:00 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../mlx/mlx.h"
#include "push_swap_game.h"

char static	*path_img_chip(int n)
{
	char	*nbr;
	char	*s1;
	char	*s2;

	nbr = ft_itoa(n);
	s1 = ft_strjoin("../sources/xpm/chip/", nbr);
	s2 = ft_strjoin(s1, ".xpm");
	free(s1);
	free(nbr);
	return (s2);
}

void	load_img_chip(t_game *g)
{
	char	*path;
	int		i;
	int		w;
	int		h;

	i = -1;
	while (++i < 18)
	{
		path = path_img_chip(i);
		g->img.chip[i] = mlx_xpm_file_to_image(g->mlx, path, &w, &h);
		// printf(RED "%s\n", path);
		free(path);
	}
}
void	load_move(t_game *g)
{
	char	*path;
	int		w;
	int		h;

	path = "../sources/xpm/move.xpm";
	g->img.mov = mlx_xpm_file_to_image(g->mlx, path, &w, &h);
}

void	init_img_chip(t_game *g)
{
	load_img_chip(g);
	load_move(g);
}
