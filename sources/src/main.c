/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:55:25 by nacho             #+#    #+#             */
/*   Updated: 2023/04/07 23:43:26 by nmota-bu         ###   ########.fr       */
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

void	print_lst(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	if (tmp)
	{
		while (tmp)
		{
			// printf(CYAN "%d index: %d\n", tmp->tmp, tmp->index);
			printf(CYAN "tmp: %d \n", tmp->num);
			tmp = tmp->next;
		}
	}
}

//=========================================================================

// void	put_wall(t_game *g)
// {
// 	int	w;
// 	int	h;

// 	g->img.wall[0] = mlx_xpm_file_to_image(g->mlx, "../sources/xpm/wall_0.xpm",
// 			&w, &h);
// 	mlx_put_image_to_window(g->mlx, g->win, g->img.wall[0], 0, 0);
// }

int	main(void)
{
	t_game	g;
	t_data	data;

	ft_bzero(&g, sizeof(t_game));
	g.data = &data;
	init_data(&data, 18);
	random_chip(&data);
	data.a = add_num(&data);
	// data.b = add_num(&data);
	//=========================================================================
	// printf(GREEN "----A----\n");
	// print_lst(data.a);
	// printf(GREEN "----B----\n");
	// print_lst(data.b);
	// print_tp(&data);
	// sa_sb(&data.a);
	//=========================================================================
	g.mlx = mlx_init();
	g.win = mlx_new_window(g.mlx, 560, 560, "nach131 Push Swap");
	init_img_btt(&g);
	init_img_chip(&g);
	// put_wall(&g);
	// put_chip_tmp(&g);
	// lap_chip(data.a, &g, locate_chip);
	lap_chip(&g, locate_chip);
	mlx_put_image_to_window(g.mlx, g.win, g.img.mov, 230, 7);
	ctrl_win(&g);
	mlx_loop(g.mlx);
	return (0);
}

//=========================================================================

// system("leaks push_swap_game");
