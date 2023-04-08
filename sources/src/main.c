/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:55:25 by nacho             #+#    #+#             */
/*   Updated: 2023/04/08 15:16:57 by nmota-bu         ###   ########.fr       */
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
			printf(CYAN "   %d \n", tmp->num);
			tmp = tmp->next;
		}
	}
}

void	print_lst_dos(t_stack *a, t_stack *b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	tmp_a = a;
	tmp_b = b;
	ft_printf(GREEN "----A----    ----B----\n");
	while (tmp_a || tmp_b)
	{
		if (tmp_a)
		{
			ft_printf(YELLOW "   %d", tmp_a->num);
			tmp_a = tmp_a->next;
		}
		else
			ft_printf("     ");
		if (tmp_b)
		{
			ft_printf(CYAN "\t\t%d", tmp_b->num);
			tmp_b = tmp_b->next;
		}
		ft_printf("\n");
	}
}

void	start_game(t_game *g, t_data *data, int size)
{
	//HAY QUE FREE DATA->TP
	(void)g;
	data->size = size;
	data->tp = ft_calloc(data->size, sizeof(int));
	random_chip(data);
	data->a = add_num(data);
}
// void	start_game(t_game *g, t_data *data, int size)
// {
// 	g->level = size;
// 	data->tp = ft_calloc(g->level, sizeof(int));
// 	data->size = g->level;
// 	random_chip(data);
// 	data->a = add_num(data);
// }

//=========================================================================
// g.level = 6;
// init_data(&data, g.level);

int	main(void)
{
	t_game	g;
	t_data	data;

	// ft_bzero(&g, sizeof(t_game));
	// start_game(&g, &data);
	// g.data = &data;
	// data.tp = ft_calloc(g.level, sizeof(int));
	// data.size = g.level;
	// random_chip(&data);
	// data.a = add_num(&data);
	ft_bzero(&g, sizeof(t_game));
	g.data = &data;
	start_game(&g, &data, 3);
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
