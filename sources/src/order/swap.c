/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:46:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/07 21:54:35 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../mlx/mlx.h"
#include "push_swap_game.h"

// Intercambia los dos primeros elementos encima del stack A
// No hace nada si hay uno o menos elementos.

// Intercambia los dos primeros elementos encima del stack B
// No hace nada si hay uno o menos elementos.

// Hay que indicar el que orden a imprimir

void	sa_sb(t_stack **stack)
{
	t_stack	*tmp;

	print_lst((*stack));
	if ((*stack) && (*stack)->next)
	{
		tmp = (*stack)->next;
		(*stack)->next = tmp->next;
		tmp->next = (*stack);
		(*stack) = tmp;
	}
}

// Los dos a la vez

void	ss(t_stack **a, t_stack **b)
{
	sa_sb(a);
	sa_sb(b);
}

void	mouse_sa_sb(t_game *g, int type)
{
	if (type == SA)
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SA][DOWN], 52, 462);
		sa_sb(&g->data->a);
	}
	else if (type == SB)
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SB][DOWN], 342, 462);
		sa_sb(&g->data->b);
	}
}
void	mouse_ss(t_game *g)
{
	mlx_put_image_to_window(g->mlx, g->win, g->img.btt[SS][DOWN], 242, 462);
	ss(&g->data->a, &g->data->b);
}
