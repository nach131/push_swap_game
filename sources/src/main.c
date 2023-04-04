/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:55:25 by nacho             #+#    #+#             */
/*   Updated: 2023/04/04 14:33:55 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mlx/mlx.h"
#include "push_swap_game.h"
#include <stdio.h>
#include <stdlib.h>

int	mouse_down(int button, int x, int y, t_game *g)
{
	printf(CYAN "x:%d, y:%d\n", x, y);
	(void)button;
	if (x >= 57 && x <= 127 && y >= 429 && y <= 455)
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[0][0], 52, 422);
	}
	return (0);
}

int	mouse_up(int button, int x, int y, t_game *g)
{
	printf(CYAN "x:%d, y:%d\n", x, y);
	(void)button;
	if (x >= 57 && x <= 127 && y >= 429 && y <= 455)
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[0][1], 52, 422);
	}
	return (0);
}

int	mouse_press(int button, int x, int y, t_game *g)
{
	printf(CYAN "x:%d, y:%d\n", x, y);
	(void)g;
	(void)button;
	if (x >= 57 && x <= 127 && y >= 429 && y <= 455)
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[0], 52, 422);
		printf("pulsado\n");
	}
	return (0);
}

int	main(void)
{
	t_game	g;
	int		w;
	int		h;

	// void	*toma;
	g.mlx = mlx_init();
	g.win = mlx_new_window(g.mlx, 560, 520, "nach131 So Long");
	// toma = mlx_xpm_file_to_image(g.mlx,
	// 								"../sources/xpm/button/sa_d.xpm",
	// 								&w,
	// 								&h);
	init_img(&g);
	g.img.wall = mlx_xpm_file_to_image(g.mlx, "../sources/xpm/01.xpm", &w, &h);
	g.img.btt[SA][DOWN] = mlx_xpm_file_to_image(g.mlx,
												"../sources/xpm/button/sa_d.xpm",
												&w,
												&h);
	g.img.btt[SA][UP] = mlx_xpm_file_to_image(g.mlx,
												"../sources/xpm/button/sa_u.xpm",
												&w,
												&h);
	// mlx_put_image_to_window(g.mlx, g.win, g.img.wall, 0, 0);
	// mlx_put_image_to_window(g.mlx, g.win, toma, 0, 0);
	mlx_hook(g.win, ON_DESTROY, 1L << 0, (void *)exit, &g);
	mlx_hook(g.win, ON_MOUSEDOWN, 1L << 2, mouse_down, &g);
	mlx_hook(g.win, ON_MOUSEUP, 1L << 1, mouse_up, &g);
	// mlx_key_hook(g.win, (void *)key_push, &game);
	// mlx_mouse_hook(g.win, mouse_press, &game);
	mlx_loop(g.mlx);
	return (0);
}
