/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:55:25 by nacho             #+#    #+#             */
/*   Updated: 2023/04/06 11:32:06 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mlx/mlx.h"
#include "push_swap_game.h"
#include <stdio.h>
#include <stdlib.h>

// int	mouse_press(int button, int x, int y, t_game *g)
// {
// 	printf(CYAN "x:%d, y:%d\n", x, y);
// 	(void)g;
// 	(void)button;
// 	if (x >= 57 && x <= 127 && y >= 429 && y <= 495)
// 		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SA][DOWN], 52, 462);
// 	return (0);
// }

void	key_hook(int keycode, t_game *game)
{
	(void)game;
	if (keycode == KEY_ESC)
		exit(0);
}

void	put_wall(t_game *g)
{
	int	w;
	int	h;

	g->img.wall = mlx_xpm_file_to_image(g->mlx, "../sources/xpm/wall.xpm", &w,
			&h);
	mlx_put_image_to_window(g->mlx, g->win, g->img.wall, 0, 0);
}

int	main(void)
{
	t_game	g;

	g.mlx = mlx_init();
	g.win = mlx_new_window(g.mlx, 560, 560, "nach131 Push Swap");
	init_img_btt(&g);
	init_img_chip(&g);
	put_wall(&g);
	put_chip(&g);
	mlx_put_image_to_window(g.mlx, g.win, g.img.mov, 230, 7);
	mlx_hook(g.win, ON_DESTROY, 1L << 0, (void *)exit, &g);
	mlx_hook(g.win, ON_MOUSEDOWN, 1L << 2, (void *)mouse_down, &g);
	mlx_hook(g.win, ON_MOUSEUP, 1L << 1, (void *)mouse_up, &g);
	mlx_key_hook(g.win, (void *)key_hook, &g);
	// mlx_mouse_hook(g.win, mouse_press, &game);
	mlx_loop(g.mlx);
	return (0);
}
