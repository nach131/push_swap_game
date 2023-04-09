/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:55:25 by nacho             #+#    #+#             */
/*   Updated: 2023/04/09 13:52:18 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mlx/mlx.h"
#include "push_swap_enum.h"
#include "push_swap_game.h"
#include <stdio.h>
#include <stdlib.h>

void	start_game(t_data *data, int size)
{
	data->size = size;
	data->game = ON;
	data->tp = ft_calloc(data->size, sizeof(int));
	random_chip(data);
	clear_stack(data->a);
	clear_stack(data->b);
	data->a = add_num(data);
}

void	end_game(t_game *g)
{
	g->data->game = OFF;
	mlx_destroy_window(g->mlx, g->win);
	g->win = mlx_new_window(g->mlx, 560, 560, "nach131 Push Swap");
	ctrl_win_end(g);
	mlx_put_image_to_window(g->mlx, g->win, g->img.wall[3], 0, 0);
	put_movements(g);
}

void	init_win(t_game *g)
{
	if (g->win)
		mlx_destroy_window(g->mlx, g->win);
	g->win = mlx_new_window(g->mlx, 560, 560, "nach131 Push Swap");
	init_img_btt(g);
	init_img_chip(g);
	lap_chip(g, locate_chip);
	ctrl_win(g);
}

int	main(void)
{
	t_game	g;
	t_data	data;

	ft_bzero(&g, sizeof(t_game));
	g.data = &data;
	start_game(&data, 3);
	g.mlx = mlx_init();
	init_win(&g);
	mlx_loop(g.mlx);
	return (0);
}

//=========================================================================

// system("leaks push_swap_game");
