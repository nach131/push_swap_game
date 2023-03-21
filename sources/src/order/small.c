/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:06:15 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/21 11:14:52 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void sort_three(t_stack **a)
{
	int one = (*a)->num;
	int two = (*a)->next->num;
	int three = (*a)->next->next->num;

	if (one < two && one < three && two > three)
	{
		rra_rrb(a, RRA);
		sa_sb(a, SA);
	}
	else if (one > two && one < three && two < three)
		sa_sb(a, SA);
	else if (one < two && one > three && two > three)
		rra_rrb(a, RRA);
	else if (two < three && one > two && one > three)
		ra_rb(a, RA);
	else if (two > three && one > two && one > three)
	{
		ra_rb(a, RA);
		sa_sb(a, SA);
	}
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

// 3->
// 5->

// 100-> 2805, 2993,2948
// 500-> 66679
