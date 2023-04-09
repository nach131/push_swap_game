/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 11:22:02 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/09 13:39:50 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../mlx/mlx.h"
#include "push_swap_enum.h"
#include "push_swap_game.h"

void	put_movements(t_game *g)
{
	char	*movements;

	movements = ft_itoa(g->count);
	mlx_string_put(g->mlx, g->win, 308, 26, 0xFFFFFFFF, movements);
	free(movements);
}

void static	put_level(t_game *g)
{
	char	*level;

	level = ft_itoa(g->data->size - 2);
	mlx_put_image_to_window(g->mlx, g->win, g->img.wall[2], 0, 0);
	mlx_string_put(g->mlx, g->win, 308, 26, 0xFFFFFFFF, level);
	free(level);
}

void	after_mouse(t_game *g)
{
	system("clear");
	print_lst_dos(g->data->a, g->data->b);
	ft_printf(RED "level:%d\n", g->data->size - 2);
	put_wall(g, OFF);
	lap_chip(g, locate_chip);
	g->data->sort = ctrl_sorted(g->data->a, g->data->size);
	put_movements(g);
	if (g->data->size == 17 && g->data->sort)
		end_game(g);
	else if (g->data->sort)
	{
		start_game(g->data, g->data->size + 1);
		put_level(g);
		lap_chip(g, locate_chip);
	}
}

void	mouse_down(int button, int x, int y, t_game *g)
{
	if (button == 1)
	{
		g->mouse = UP;
		if (x >= 57 && x <= 127 && y >= 468 && y <= 495)
			mouse_sa_sb(g, SA);
		else if (x >= 57 && x <= 127 && y >= 510 && y <= 537)
			mouse_pa_pb(g, PA);
		else if (x >= 147 && x <= 216 && y >= 468 && y <= 495)
			mouse_ra_rb(g, RA);
		else if (x >= 147 && x <= 216 && y >= 510 && y <= 537)
			mouse_rra_rrb(g, RRA);
		else if (x >= 347 && x <= 417 && y >= 468 && y <= 495)
			mouse_sa_sb(g, SB);
		else if (x >= 347 && x <= 417 && y >= 510 && y <= 537)
			mouse_pa_pb(g, PB);
		else if (x >= 437 && x <= 507 && y >= 468 && y <= 495)
			mouse_ra_rb(g, RB);
		else if (x >= 437 && x <= 507 && y >= 510 && y <= 537)
			mouse_rra_rrb(g, RRB);
		else if (x >= 247 && x <= 318 && y >= 468 && y <= 495)
			mouse_ss(g);
		else if (x >= 247 && x <= 275 && y >= 510 && y <= 537)
			mouse_rr(g);
		else if (x >= 289 && x <= 318 && y >= 510 && y <= 537)
			mouse_rrr(g);
		after_mouse(g);
	}
	else if (button == 2)
		mlx_put_image_to_window(g->mlx, g->win, g->img.wall[4], 0, 0);
}

void	mouse_up(int button, int x, int y, t_game *g)
{
	(void)x;
	(void)y;
	if (g->mouse && button == 1)
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SA][UP], 52, 462);
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[PA][UP], 52, 505);
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RA][UP], 141, 462);
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRA][UP], 141, 505);
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SB][UP], 342, 462);
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[PB][UP], 342, 505);
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RB][UP], 431, 462);
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRB][UP], 431, 505);
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SS][UP], 242, 462);
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RR][UP], 242, 506);
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRR][UP], 284, 506);
	}
	if (button == 2)
	{
		put_wall(g, OFF);
		lap_chip(g, locate_chip);
	}
}
