/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:55:25 by nacho             #+#    #+#             */
/*   Updated: 2023/04/07 17:44:54 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mlx/mlx.h"
#include "push_swap_enum.h"
#include "push_swap_game.h"
#include <stdio.h>
#include <stdlib.h>

void	print_tp(t_data *data)
{
	int	i;

	i = data->size - 1;
	while (i >= 0)
	{
		printf(ORANGE "%d :%d\n", data->tp[i], i);
		i--;
	}
}

void	print_lst(t_stack *num)
{
	while (num)
	{
		// printf(CYAN "%d index: %d\n", num->num, num->index);
		printf(CYAN "num: %d \n", num->num);
		num = num->next;
	}
}

//=========================================================================

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
	t_data	data;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_b = NULL;
	g.data = &data;
	init_data(&data, 3);
	random_chip(&data);
	// data.tp[0] = 1;
	// data.tp[1] = 2;
	// data.tp[2] = 3;
	// data.tp[3] = 4;
	// data.tp[4] = 5;
	// data.tp[5] = 6;
	// data.tp[6] = 7;
	// data.tp[7] = 8;
	// data.tp[8] = 9;
	// data.tp[9] = 10;
	// data.tp[10] = 11;
	// data.tp[11] = 12;
	// data.tp[12] = 13;
	// data.tp[13] = 14;
	// data.tp[14] = 15;
	// data.tp[15] = 16;
	// data.tp[16] = 17;
	// data.tp[17] = 18;
	// print_tp_dos(data.tp, data.size);
	stack_a = add_num(&data);
	//=========================================================================
	printf(GREEN "----A----\n");
	print_lst(stack_a);
	printf(GREEN "----B----\n");
	print_lst(stack_b);
	// print_tp(&data);
	//=========================================================================
	g.mlx = mlx_init();
	g.win = mlx_new_window(g.mlx, 560, 560, "nach131 Push Swap");
	init_img_btt(&g);
	// system("leaks push_swap_game");
	init_img_chip(&g);
	put_wall(&g);
	put_chip_tmp(&g);
	lap_chip(stack_a, &g, locate_chip);
	mlx_put_image_to_window(g.mlx, g.win, g.img.mov, 230, 7);
	ctrl_win(&g);
	mlx_loop(g.mlx);
	return (0);
}

//=========================================================================
