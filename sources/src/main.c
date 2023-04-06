/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:55:25 by nacho             #+#    #+#             */
/*   Updated: 2023/04/06 11:59:08 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mlx/mlx.h"
#include "push_swap.h"
#include "push_swap_game.h"
#include <stdio.h>
#include <stdlib.h>

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

void	ctrl_win(t_game *g)
{
	mlx_hook(g->win, ON_DESTROY, 1L << 0, (void *)exit, g);
	mlx_hook(g->win, ON_MOUSEDOWN, 1L << 2, (void *)mouse_down, g);
	mlx_hook(g->win, ON_MOUSEUP, 1L << 1, (void *)mouse_up, g);
	mlx_key_hook(g->win, (void *)key_hook, g);
}
int	main(void)
{
	t_game	g;

	// t_data	data;
	// t_stack	*stack_a;
	// t_stack	*stack_b;
	g.mlx = mlx_init();
	g.win = mlx_new_window(g.mlx, 560, 560, "nach131 Push Swap");
	init_img_btt(&g);
	init_img_chip(&g);
	put_wall(&g);
	put_chip(&g);
	mlx_put_image_to_window(g.mlx, g.win, g.img.mov, 230, 7);
	ctrl_win(&g);
	mlx_loop(g.mlx);
	return (0);
}
