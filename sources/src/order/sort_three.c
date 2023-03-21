/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:06:15 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/21 14:22:11 by nmota-bu         ###   ########.fr       */
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

void print_lst_dos(t_stack *num)
{
	while (num)
	{
		printf(CYAN "%d index: %d\n", num->num, num->index);
		num = num->next;
	}
}
void sort_more(t_stack **a, t_stack **b, int size)
{

	(void)a;
	(void)b;
	int i = 0;
	int j = 0;
	int pivot = size / 2 - 1;
	int count = (size - 1) - pivot;

	printf(RED "mitad:%d, size:%d\n", pivot, size);
	printf("count %d\n", count);

	while (i < pivot)
	{
		while ((*a)->index <= pivot && j != count)
		{
			// print_lst_dos(*a);
			ra_rb(a, RA);
		}
		while (len_stack(a) > 1 && (*a)->index > pivot)
		{
			pa_pb(a, b, PB); // para no moverlos todos comprobar si el ultimo es el que busco
			j++;
		}
		i++;
	}
}
