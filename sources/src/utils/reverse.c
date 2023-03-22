/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:47:14 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/22 13:22:08 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

// desplaza hacia abajo todos los elementos del stack A una posición,
// de forma que el último elemento se convierte en el primero.

// Desplaza hacia abajo todos los elementos del stack B una posición,
// de forma que el último elemento se convierte en el primero.

// Hay que indicar el que orden a imprimir

void rra_rrb(t_stack **stack, int order)
{
	t_stack *prev;
	t_stack *last;

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
		if (order == RRA)
			ft_printf("rra\n");
		else if (order == RRB)
			ft_printf("rrb\n");
	}
}

// Los dos a la vez

void rrr(t_stack **a, t_stack **b)
{
	rra_rrb(a, XX);
	rra_rrb(b, XX);
	ft_printf("rrr\n");
}
