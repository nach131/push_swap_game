/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chip.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:08:24 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/04 22:43:17 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../mlx/mlx.h"
#include "push_swap_game.h"

void	put_chip(t_game *g)
{
	// STACK A
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[0], 5, 1);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[1], 5, 22);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[2], 5, 44);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[3], 5, 66);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[4], 5, 88);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[5], 5, 110);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[6], 5, 132);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[7], 5, 154);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[8], 5, 176);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[9], 5, 198);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[10], 5, 220);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[11], 5, 242);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[12], 5, 264);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[13], 5, 286);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[14], 5, 308);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[15], 5, 330);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[16], 5, 352);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[17], 5, 374);
	// STACK B
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[0], 294, 1);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[1], 294, 22);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[2], 294, 44);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[3], 294, 66);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[4], 294, 88);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[5], 294, 110);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[6], 294, 132);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[7], 294, 154);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[8], 294, 176);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[9], 294, 198);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[10], 294, 220);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[11], 294, 242);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[12], 294, 264);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[13], 294, 286);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[14], 294, 308);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[15], 294, 330);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[16], 294, 352);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[17], 294, 374);
}
