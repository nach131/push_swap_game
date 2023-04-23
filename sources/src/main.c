/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:55:25 by nacho             #+#    #+#             */
/*   Updated: 2023/04/23 22:41:49 by nmota-bu         ###   ########.fr       */
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

void static	put_num(t_game *g)
{
	int	i;
	int	num;

	num = g->count;
	i = 0;
	while (num)
	{
		if (i == 0)
			mlx_put_image_to_window(g->mlx, g->win, g->img.num[num % 10], 287,
					83);
		if (i == 1)
			mlx_put_image_to_window(g->mlx, g->win, g->img.num[num % 10], 262,
					83);
		if (i == 2)
			mlx_put_image_to_window(g->mlx, g->win, g->img.num[num % 10], 237,
					83);
		i++;
		num /= 10;
	}
}

void	end_game(t_game *g)
{
	g->data->game = OFF;
	mlx_destroy_window(g->mlx, g->win);
	g->win = mlx_new_window(g->mlx, 560, 560, "nach131 Push Swap");
	ctrl_win_end(g);
	mlx_put_image_to_window(g->mlx, g->win, g->img.wall[3], 0, 0);
	// put_movements(g);
	put_num(g);
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
	t_game	*g;
	t_data	*data;

	g = ft_calloc(sizeof(t_game), 1);
	data = ft_calloc(sizeof(t_data), 1);
	g->data = data;
	start_game(data, 3);
	g->mlx = mlx_init();
	init_win(g);
	mlx_loop(g->mlx);
	return (0);
}

//=========================================================================

// system("leaks push_swap_game");
