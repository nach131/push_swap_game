/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:06:15 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/21 15:39:08 by nmota-bu         ###   ########.fr       */
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

void mitad_inf_a(t_stack **a, t_stack **b, int size)
{
	int i = 0;
	int pivot = len_stack(a) / 2 - 1;

	printf(RED "mitad:%d, size:%d\n", pivot, size);

	while (i <= pivot)
	{
		while ((*a)->index <= pivot)
			ra_rb(a, RA);
		while ((*a)->index > pivot)
		{
			pa_pb(a, b, PB);
			i++;
		}
	}
}

// void invertir_mitad(t_stack **a, t_stack **b, int size)
// {
// 	int i = 0;
// 	int pivot = len_stack(a) - 1;

// 	printf(RED "invertir_mitad:%d, size:%d\n", pivot, size);

// 	while ((*a)->index > pivot)
// 	{
// 		pa_pb(a, b, PA);
// 		i++;
// 	}

// 	while ((*a)->index <= pivot)
// 	{
// 		while ((*a)->index <= pivot)
// 			ra_rb(a, RA);
// 		while ((*a)->index > pivot)
// 		{
// 			pa_pb(a, b, PB);
// 			i++;
// 		}
// 	}
// }

void mitad_mayo_a(t_stack **a, t_stack **b, int size)
{
	int i = len_stack(a) / 2;
	int pivot = len_stack(a) / 2 - 1;

	printf(RED "pivot:%d, size:%d i:%d\n", pivot, size, i);

	while (i != 0)
	{
		while ((*a)->index > pivot)
			ra_rb(a, RA);
		while ((*a)->index <= pivot)
		{
			pa_pb(a, b, PB);
			i--;
		}
	}
}
void sort_more(t_stack **a, t_stack **b, int size)
{
	mitad_mayo_a(a, b, size);
	mitad_mayo_a(a, b, size);
	// mitad_inf_a(a, b, size);
	// invertir_mitad(a, b, size);
}
