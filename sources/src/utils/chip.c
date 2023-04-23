/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chip.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:08:24 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/23 18:56:16 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../mlx/mlx.h"
#include "push_swap_enum.h"
#include "push_swap_game.h"

void	put_chip(t_game *g, int chip, int stack, int img)
{
	mlx_put_image_to_window(g->mlx, g->win, g->img.chip[img - 1], stack, chip);
}

void	locate_chip(int num, int i, t_game *g, int stack)
{
	int	chip;

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
	if (stack == STK_A)
		put_chip(g, chip, STACK_A, num);
	else
		put_chip(g, chip, STACK_B, num);
}

void	lap_chip(t_game *g, void (*function)(int chip, int i, t_game *g,
			int stack))
{
	int		i;
	t_stack	*a;
	t_stack	*b;

	a = g->data->a;
	b = g->data->b;
	i = g->data->size - 1;
	if (a)
	{
		while (a)
		{
			function(a->num, i, g, STK_A);
			a = a->next;
			i--;
		}
	}
	i = g->data->size - 1;
	if (b)
	{
		while (b)
		{
			function(b->num, i, g, STK_B);
			b = b->next;
			i--;
		}
	}
}
