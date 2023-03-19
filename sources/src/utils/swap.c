/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:46:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/19 12:28:00 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

// Intercambia los dos primeros elementos encima del stack a
// No hace nada si hay uno o menos elementos.

void sa_sb(t_stack **stack, int order)
{
	if ((*stack) && (*stack)->next)
	{
		t_stack *tmp = (*stack)->next;
		(*stack)->next = tmp->next;
		tmp->next = (*stack);
		(*stack) = tmp;
	}
	if (order == SA)
		ft_printf("sa\n");
	else if (order == SB)
		ft_printf("sb\n");
}

// // Los dos a la vez

void ss(t_stack **a, t_stack **b)
{
	sa_sb(a, SA);
	sa_sb(b, SB);
}
