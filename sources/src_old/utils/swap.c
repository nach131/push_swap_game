/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:46:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/23 16:24:09 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

// Intercambia los dos primeros elementos encima del stack A
// No hace nada si hay uno o menos elementos.

// Intercambia los dos primeros elementos encima del stack B
// No hace nada si hay uno o menos elementos.

// Hay que indicar el que orden a imprimir

void	sa_sb(t_stack **stack, int order)
{
	t_stack	*tmp;

	if ((*stack) && (*stack)->next)
	{
		tmp = (*stack)->next;
		(*stack)->next = tmp->next;
		tmp->next = (*stack);
		(*stack) = tmp;
		if (order == SA)
			ft_printf("sa\n");
		else if (order == SB)
			ft_printf("sb\n");
	}
}

// // Los dos a la vez

void	ss(t_stack **a, t_stack **b)
{
	sa_sb(a, XX);
	sa_sb(b, XX);
	ft_printf("ss\n");
}
