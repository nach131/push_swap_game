/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:39:48 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/08 11:50:34 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../mlx/mlx.h"
#include "push_swap_enum.h"
#include "push_swap_game.h"

// Toma el primer elemento del stack B y lo pone encima del stack A.
// No hace nada si B está vacío.

// Toma el primer elemento del stack A y lo pone encima del stack B.
// No hace nada si A está vacío.

// Hay que indicar el que orden a imprimir

void	pa_pb(t_stack **stack_a, t_stack **stack_b, int order)
{
	t_stack	*tmp;

	if (order == PA)
	{
		if (*stack_b)
		{
			tmp = *stack_b;
			*stack_b = (*stack_b)->next;
			tmp->next = *stack_a;
			*stack_a = tmp;
		}
	}
	if (order == PB)
	{
		if (*stack_a)
		{
			tmp = *stack_a;
			*stack_a = (*stack_a)->next;
			tmp->next = *stack_b;
			*stack_b = tmp;
		}
	}
}

int	len_stack(t_stack **stack)
{
	t_stack	*tmp;
	int		i;

	tmp = *stack;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	mouse_pa_pb(t_game *g, int type)
{
	if (type == PA)
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[PA][DOWN], 52, 505);
		pa_pb(&g->data->a, &g->data->b, PA);
		if (len_stack(&g->data->b))
			g->count++;
	}
	else if (type == PB)
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.btt[PB][DOWN], 342, 505);
		pa_pb(&g->data->a, &g->data->b, PB);
		if (len_stack(&g->data->a))
			g->count++;
	}
}
