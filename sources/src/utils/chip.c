/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chip.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:08:24 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/07 17:30:16 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../mlx/mlx.h"
#include "push_swap_enum.h"
#include "push_swap_game.h"

void	put_chip_tmp(t_game *g)
{
	// STACK A
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[0], STACK_A, CHIP_0);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[1], STACK_A, CHIP_1);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[2], STACK_A, CHIP_2);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[3], STACK_A, CHIP_3);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[4], STACK_A, CHIP_4);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[5], STACK_A, CHIP_5);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[6], STACK_A, CHIP_6);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[7], STACK_A, CHIP_7);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[8], STACK_A, CHIP_8);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[9], STACK_A, CHIP_9);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[10], STACK_A,
	// CHIP_10);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[11], STACK_A,
	// CHIP_11);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[12], STACK_A,
	// CHIP_12);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[13], STACK_A,
	// CHIP_13);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[14], STACK_A,
	// CHIP_14);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[15], STACK_A,
	// CHIP_15);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[16], STACK_A,
	// CHIP_16);
	// mlx_put_image_to_window(g->mlx, g->win, g->img.chip[17], STACK_A,
	// CHIP_17);
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

void	put_chip(t_game *g, int chip, int stack, int img)
{
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[img - 1], stack, chip);
}

void	locate_chip(int num, int i, t_game *g)
{
	int	chip;

	// printf(RED "index: %d num: %d\n", i, num);
	// int stack;
	if (i == 0)
		chip = CHIP_0;
	else if (i == 1)
		chip = CHIP_1;
	else if (i == 2)
		chip = CHIP_2;
	else if (i == 3)
		chip = CHIP_3;
	else if (i == 4)
		chip = CHIP_4;
	else if (i == 5)
		chip = CHIP_5;
	else if (i == 6)
		chip = CHIP_6;
	else if (i == 7)
		chip = CHIP_7;
	else if (i == 8)
		chip = CHIP_8;
	else if (i == 9)
		chip = CHIP_9;
	else if (i == 10)
		chip = CHIP_10;
	else if (i == 11)
		chip = CHIP_11;
	else if (i == 12)
		chip = CHIP_12;
	else if (i == 13)
		chip = CHIP_13;
	else if (i == 14)
		chip = CHIP_14;
	else if (i == 15)
		chip = CHIP_15;
	else if (i == 16)
		chip = CHIP_16;
	else
		chip = CHIP_17;
	put_chip(g, chip, STACK_A, num);
}

void	lap_chip(t_stack *stack, t_game *g, void (*function)(int chip, int i,
			t_game *g))
{
	int	i;

	// ft_printf(ORANGE "%d\n", g->data->size);
	i = g->data->size - 1;
	// i = 0;
	if (stack)
	{
		while (stack)
		{
			function(stack->num, i, g);
			// ft_printf(ORANGE "%d\n", stack->num);
			stack = stack->next;
			i--;
			// i++;
		}
	}
}
