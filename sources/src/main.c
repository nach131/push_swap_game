/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:55:25 by nacho             #+#    #+#             */
/*   Updated: 2023/04/03 21:44:47 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mlx/mlx.h"
#include "push_swap_game.h"
#include <stdio.h>
#include <stdlib.h>

int	mouse_down(int button, int x, int y, t_game *game)
{
	printf(CYAN "x:%d, y:%d\n", x, y);
	(void)button;
	if (x >= 57 && x <= 127 && y >= 429 && y <= 455)
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img.btt[0][0], 52,
				422);
	}
	return (0);
}

int	mouse_up(int button, int x, int y, t_game *game)
{
	printf(CYAN "x:%d, y:%d\n", x, y);
	(void)button;
	if (x >= 57 && x <= 127 && y >= 429 && y <= 455)
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img.btt[0][1], 52,
				422);
	}
	return (0);
}

int	mouse_press(int button, int x, int y, t_game *game)
{
	printf(CYAN "x:%d, y:%d\n", x, y);
	(void)game;
	(void)button;
	if (x >= 57 && x <= 127 && y >= 429 && y <= 455)
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img.btt[0], 52,
				422);
		printf("pulsado\n");
	}
	return (0);
}

int	main(void)
{
	t_game	game;
	int		w;
	int		h;

	game.mlx = mlx_init();
	game.win = mlx_new_window(game.mlx, 560, 520, "nach131 So Long");
	game.img.wall = mlx_xpm_file_to_image(game.mlx, "../sources/xpm/01.xpm", &w,
			&h);
	game.img.btt[SA][DOWN] = mlx_xpm_file_to_image(game.mlx,
													"../sources/xpm/button/sa_b.xpm",
													&w,
													&h);
	game.img.btt[SA][UP] = mlx_xpm_file_to_image(game.mlx,
													"../sources/xpm/button/sa_a.xpm",
													&w,
													&h);
	mlx_put_image_to_window(game.mlx, game.win, game.img.wall, 0, 0);
	// 422);
	mlx_hook(game.win, ON_DESTROY, 1L << 0, (void *)exit, &game);
	mlx_hook(game.win, ON_MOUSEDOWN, 1L << 2, mouse_down, &game);
	mlx_hook(game.win, ON_MOUSEUP, 1L << 1, mouse_up, &game);
	// mlx_key_hook(game.win, (void *)key_push, &game);
	// mlx_mouse_hook(game.win, mouse_press, &game);
	mlx_loop(game.mlx);
	return (0);
}
