/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chip.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:08:24 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/07 11:16:33 by nmota-bu         ###   ########.fr       */
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
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[0], STACK_A, CHIP_0);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[1], STACK_A, CHIP_1);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[2], STACK_A, CHIP_2);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[3], STACK_A, CHIP_3);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[4], STACK_A, CHIP_4);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[5], STACK_A, CHIP_5);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[6], STACK_A, CHIP_6);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[7], STACK_A, CHIP_7);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[8], STACK_A, CHIP_8);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[9], STACK_A, CHIP_9);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[10], STACK_A, CHIP_10);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[11], STACK_A, CHIP_11);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[12], STACK_A, CHIP_12);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[13], STACK_A, CHIP_13);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[14], STACK_A, CHIP_14);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[15], STACK_A, CHIP_15);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[16], STACK_A, CHIP_16);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[17], STACK_A, CHIP_17);
	// STACK BCHIP_10_
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[1], STACK_B, CHIP_1);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[2], STACK_B, CHIP_14);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[3], STACK_B, CHIP_3);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[4], STACK_B, CHIP_4);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[5], STACK_B, CHIP_15);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[6], STACK_B, CHIP_16);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[7], STACK_B, CHIP_7);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[8], STACK_B, CHIP_8);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[9], STACK_B, CHIP_9);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[10], STACK_B, CHIP_11);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[11], STACK_B, CHIP_0);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[12], STACK_B, CHIP_12);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[13], STACK_B, CHIP_13);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[14], STACK_B, CHIP_2);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[15], STACK_B, CHIP_5);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[16], STACK_B, CHIP_6);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[17], STACK_B, CHIP_17);
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[0], STACK_B, CHIP_10);
}
