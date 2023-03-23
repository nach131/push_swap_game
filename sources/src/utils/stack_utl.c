/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:17:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/23 16:24:05 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

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

int	find_small(t_stack **stack)
{
	int		pivot;
	t_stack	*tmp;

	pivot = (*stack)->index;
	tmp = (*stack)->next;
	while (tmp)
	{
		if (tmp->index < pivot)
			pivot = tmp->index;
		tmp = tmp->next;
	}
	return (pivot);
}

int	first_inx(t_stack *stack)
{
	return (stack->index);
}
