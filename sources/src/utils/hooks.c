/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:43:41 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/23 23:01:53 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../mlx/mlx.h"
#include "push_swap_enum.h"
#include "push_swap_game.h"

void	key_hook(int keycode, t_game *g)
{
	if (keycode == KEY_ESC)
		exit(0);
	else if (keycode == RESET && g->data->game)
	{
		g->count = 0;
		start_game(g->data, 3);
		init_win(g);
	}
}

void	ctrl_win(t_game *g)
{
	mlx_hook(g->win, ON_DESTROY, 1L << 0, (void *)exit, g);
	mlx_hook(g->win, ON_MOUSEDOWN, 1L << 2, (void *)mouse_down, g);
	mlx_hook(g->win, ON_MOUSEUP, 1L << 1, (void *)mouse_up, g);
	mlx_key_hook(g->win, (void *)key_hook, g);
}

void	ctrl_win_end(t_game *g)
{
	mlx_hook(g->win, ON_DESTROY, 1L << 0, (void *)exit, g);
	mlx_key_hook(g->win, (void *)key_hook, g);
}
