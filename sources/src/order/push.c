/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:39:48 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/07 20:32:46 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

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
