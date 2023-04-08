/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:47:14 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/08 11:34:41 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../mlx/mlx.h"
#include "push_swap_enum.h"
#include "push_swap_game.h"

// desplaza hacia abajo todos los elementos del stack A una posición,
// de forma que el último elemento se convierte en el primero.

// Desplaza hacia abajo todos los elementos del stack B una posición,
// de forma que el último elemento se convierte en el primero.

// Hay que indicar el que orden a imprimir

void	rra_rrb(t_stack **stack)
{
	t_stack	*prev;
	t_stack	*last;

	if ((*stack) && (*stack)->next)
	{
		prev = NULL;
		last = *stack;
		while (last->next)
		{
			prev = last;
			last = last->next;
		}
		prev->next = NULL;
		last->next = *stack;
		*stack = last;
	}
}

// Los dos a la vez

void	rrr(t_stack **a, t_stack **b)
{
	rra_rrb(a);
	rra_rrb(b);
}

void	mouse_rra_rrb(t_game *g, int type)
{
	if (type == RRA)
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRA][DOWN], 141,
				505);
		rra_rrb(&g->data->a);
	}
	else if (type == RRB)
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRB][DOWN], 431,
				505);
		rra_rrb(&g->data->b);
	}
	g->count++;
}

void	mouse_rrr(t_game *g)
{
	mlx_put_image_to_window(g->mlx, g->win, g->img.btt[RRR][DOWN], 284, 505);
	rrr(&g->data->a, &g->data->b);
	g->count++;
}
