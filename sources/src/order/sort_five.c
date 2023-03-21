/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:13:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/21 11:18:16 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

int count_posicion_s(t_stack **a, int n)
{
	t_stack *tmp = *a;
	int i = 1;
	while (tmp)
	{
		if (tmp->index == n)
		{
			break;
		}
		i++;
		tmp = tmp->next;
	}
	return (i - 1);
}

void movimiento_s(t_stack **a, int n)
{
	int i = 0;

	while (i < n)
	{
		ra_rb(a, RA);
		i++;
	}
}

void sort_five(t_stack **a, t_stack **b, int size)
{
	int small = find_small(a);

	if (len_stack(a) > 3)
	{
		movimiento_s(a, count_posicion_s(a, small));
		pa_pb(&(*a), &(*b), PB);
		sort_five(a, b, size);
	}
	sort_three(a);
	pa_pb(&(*a), &(*b), PA);
	pa_pb(&(*a), &(*b), PA);
}
