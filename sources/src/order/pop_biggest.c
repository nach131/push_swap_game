/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_biggest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:56:43 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/26 09:54:49 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

int	find_big(t_stack *stack)
{
	int	num;

	num = stack->index;
	while (stack && stack->next)
	{
		if (num < stack->next->index)
			num = stack->next->index;
		stack = stack->next;
	}
	return (num);
}

void	pop_biggest(t_stack **a, t_stack **b, t_data *data)
{
	ft_bzero(data->tp, data->size * sizeof(int));
	while ((*b) && (*b)->next)
	{
		while (tp_is_act(data->tp, find_big((*b)) - 1))
		{
			rra_rrb(b, RRB);
			switch_tp(data->tp, (*b)->index - 1, OFF);
		}
		if (find_big((*b)) != (*b)->index)
		{
			switch_tp(data->tp, (*b)->index - 1, ON);
			ra_rb(b, RB);
		}
		if (find_big((*b)) == (*b)->index)
			pa_pb(a, b, PA);
		if ((*b) && !(*b)->next)
			pa_pb(a, b, PA);
	}
}
