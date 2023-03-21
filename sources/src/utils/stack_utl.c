/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:17:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/21 11:18:43 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

int len_stack(t_stack **stack)
{
	t_stack *tmp = *stack;
	int i = 0;

	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int find_small(t_stack **stack)
{
	int pivot = (*stack)->index;
	t_stack *tmp = (*stack)->next;
	while (tmp)
	{
		if (tmp->index < pivot)
			pivot = tmp->index;
		tmp = tmp->next;
	}
	return (pivot);
}
