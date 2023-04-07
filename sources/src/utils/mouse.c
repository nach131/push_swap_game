/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 11:22:02 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/07 17:39:27 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../mlx/mlx.h"
#include "push_swap_enum.h"
#include "push_swap_game.h"

void	mouse_down(int button, int x, int y, t_game *g)
{
	// printf(CYAN "x:%d, y:%d\n", x, y);
	printf(ORANGE "button:%d\n", button);
	if (button == 1)
	{
		g->mouse = UP;
		if (x >= 57 && x <= 127 && y >= 468 && y <= 495)
		{
			mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SA][DOWN], 52,
					462);
		}
		else if (x >= 57 && x <= 127 && y >= 510 && y <= 537)
			mlx_put_image_to_window(g->mlx, g->win, g->img.btt[PA][DOWN], 52,
					505);
		else if (x >= 147 && x <= 216 && y >= 468 && y <= 495)
			mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RA][DOWN], 141,
					462);
		else if (x >= 147 && x <= 216 && y >= 510 && y <= 537)
			mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRA][DOWN], 141,
					505);
		else if (x >= 347 && x <= 417 && y >= 468 && y <= 495)
			mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SB][DOWN], 342,
					462);
		else if (x >= 347 && x <= 417 && y >= 510 && y <= 537)
			mlx_put_image_to_window(g->mlx, g->win, g->img.btt[PB][DOWN], 342,
					505);
		else if (x >= 437 && x <= 507 && y >= 468 && y <= 495)
			mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RB][DOWN], 431,
					462);
		else if (x >= 437 && x <= 507 && y >= 510 && y <= 537)
			mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRB][DOWN], 431,
					505);
		else if (x >= 247 && x <= 318 && y >= 468 && y <= 495)
			mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SS][DOWN], 242,
					462);
		else if (x >= 247 && x <= 275 && y >= 510 && y <= 537)
			mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RR][DOWN], 242,
					505);
		else if (x >= 289 && x <= 318 && y >= 510 && y <= 537)
			mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRR][DOWN], 284,
					505);
	}
}

void	mouse_up(int button, int x, int y, t_game *g)
{
	printf(CYAN "x:%d, y:%d\n", x, y);
	(void)button;
	if (g->mouse)
	{
		// if (x >= 57 && x <= 127 && y >= 468 && y <= 495)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SA][UP], 52, 462);
		// else if (x >= 57 && x <= 127 && y >= 510 && y <= 537)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[PA][UP], 52, 505);
		// else if (x >= 147 && x <= 216 && y >= 468 && y <= 495)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RA][UP], 141, 462);
		// else if (x >= 147 && x <= 216 && y >= 510 && y <= 537)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRA][UP], 141, 505);
		// else if (x >= 347 && x <= 417 && y >= 468 && y <= 495)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SB][UP], 342, 462);
		// else if (x >= 347 && x <= 417 && y >= 510 && y <= 537)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[PB][UP], 342, 505);
		// else if (x >= 437 && x <= 507 && y >= 468 && y <= 495)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RB][UP], 431, 462);
		// else if (x >= 437 && x <= 507 && y >= 510 && y <= 537)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRB][UP], 431, 505);
		// else if (x >= 247 && x <= 318 && y >= 468 && y <= 495)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SS][UP], 242, 462);
		// else if (x >= 247 && x <= 275 && y >= 510 && y <= 537)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RR][UP], 242, 506);
		// else if (x >= 289 && x <= 318 && y >= 510 && y <= 537)
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRR][UP], 284, 506);
	}
}
