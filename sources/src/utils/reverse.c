/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:47:14 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/07 20:46:48 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

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
