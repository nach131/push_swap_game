/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:47:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/07 20:42:34 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap_game.h"

// Desplaza hacia arriba todos los elementos del stack A una posición,
// de forma que el primer elemento se convierte en el último.

// Desplaza hacia arriba todos los elementos del stack B una posición,
// de forma que el primer elemento se convierte en el último.

// Hayq que indicar el que orden a imprimir

void	ra_rb(t_stack **stack)
{
	t_stack	*last;

	if ((*stack) && (*stack)->next)
	{
		last = *stack;
		while (last->next)
			last = last->next;
		last->next = *stack;
		*stack = (*stack)->next;
		last->next->next = NULL;
	}
}

//  Desplaza al mismo tiempo todos los elementos del stack A
// y del stack B una posición hacia arriba,
//  de forma que el primer elemento se convierte en el último.

void	rr(t_stack **a, t_stack **b)
{
	ra_rb(a);
	ra_rb(b);
}
