/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:55:25 by nacho             #+#    #+#             */
/*   Updated: 2023/04/05 10:14:31 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mlx/mlx.h"
#include "push_swap_game.h"
#include <stdio.h>
#include <stdlib.h>

void	mouse_down(int button, int x, int y, t_game *g)
{
	printf(CYAN "x:%d, y:%d\n", x, y);
	printf(ORANGE "button:%d\n", button);
	if (x >= 57 && x <= 127 && y >= 429 && y <= 455)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SA][DOWN], 52, 422);
	else if (x >= 57 && x <= 127 && y >= 471 && y <= 497)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[PA][DOWN], 52, 465);
	else if (x >= 147 && x <= 216 && y >= 428 && y <= 455)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RA][DOWN], 141, 422);
	else if (x >= 147 && x <= 216 && y >= 471 && y <= 497)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRA][DOWN], 141,
				465);
	else if (x >= 347 && x <= 417 && y >= 428 && y <= 455)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SB][DOWN], 342, 422);
	else if (x >= 347 && x <= 417 && y >= 471 && y <= 497)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[PB][DOWN], 342, 465);
	else if (x >= 437 && x <= 507 && y >= 428 && y <= 455)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RB][DOWN], 431, 422);
	else if (x >= 437 && x <= 507 && y >= 472 && y <= 497)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRB][DOWN], 431,
				465);
	else if (x >= 247 && x <= 318 && y >= 429 && y <= 455)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SS][DOWN], 242, 422);
	else if (x >= 247 && x <= 275 && y >= 470 && y <= 497)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RR][DOWN], 242, 465);
	else if (x >= 289 && x <= 318 && y >= 470 && y <= 497)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRR][DOWN], 284,
				465);
}

void	mouse_up(int button, int x, int y, t_game *g)
{
	printf(CYAN "x:%d, y:%d\n", x, y);
	(void)button;
	if (x >= 57 && x <= 127 && y >= 429 && y <= 455)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SA][UP], 52, 422);
	else if (x >= 57 && x <= 127 && y >= 471 && y <= 497)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[PA][UP], 52, 465);
	else if (x >= 147 && x <= 216 && y >= 428 && y <= 455)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RA][UP], 141, 422);
	else if (x >= 147 && x <= 216 && y >= 471 && y <= 497)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRA][UP], 141, 465);
	else if (x >= 347 && x <= 417 && y >= 428 && y <= 455)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SB][UP], 342, 422);
	else if (x >= 347 && x <= 417 && y >= 471 && y <= 497)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[PB][UP], 342, 465);
	else if (x >= 437 && x <= 507 && y >= 428 && y <= 455)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RB][UP], 431, 422);
	else if (x >= 437 && x <= 507 && y >= 472 && y <= 497)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRB][UP], 431, 465);
	else if (x >= 247 && x <= 318 && y >= 429 && y <= 455)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SS][UP], 242, 422);
	else if (x >= 247 && x <= 275 && y >= 470 && y <= 497)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RR][UP], 242, 465);
	else if (x >= 289 && x <= 318 && y >= 470 && y <= 497)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRR][UP], 284, 465);
}

// int	mouse_press(int button, int x, int y, t_game *g)
// {
// 	printf(CYAN "x:%d, y:%d\n", x, y);
// 	(void)g;
// 	(void)button;
// 	if (x >= 57 && x <= 127 && y >= 429 && y <= 455)
// 		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SA][DOWN], 52, 422);
// 	return (0);
// }

void	key_hook(int keycode, t_game *game)
{
	(void)game;
	if (keycode == KEY_ESC)
		exit(0);
}

int	main(void)
{
	t_game	g;
	int		w;
	int		h;

	g.mlx = mlx_init();
	g.win = mlx_new_window(g.mlx, 560, 560, "nach131 Push Swap");
	init_img_btt(&g);
	init_img_chip(&g);
	g.img.wall = mlx_xpm_file_to_image(g.mlx, "../sources/xpm/wall.xpm", &w,
			&h);
	mlx_put_image_to_window(g.mlx, g.win, g.img.wall, 0, 0);
	put_chip(&g);
	// mlx_put_image_to_window(g.mlx, g.win, g.img.mov, 230, 7);
	mlx_hook(g.win, ON_DESTROY, 1L << 0, (void *)exit, &g);
	mlx_hook(g.win, ON_MOUSEDOWN, 1L << 2, (void *)mouse_down, &g);
	mlx_hook(g.win, ON_MOUSEUP, 1L << 1, (void *)mouse_up, &g);
	mlx_key_hook(g.win, (void *)key_hook, &g);
	// mlx_mouse_hook(g.win, mouse_press, &game);
	mlx_loop(g.mlx);
	return (0);
}
