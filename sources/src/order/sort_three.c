/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:06:15 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/21 22:40:32 by nmota-bu         ###   ########.fr       */
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
		printf(YELLOW "%d index: %d\n", num->num, num->index);
		num = num->next;
	}
}

int index_middle(t_stack *a)
{
	t_stack *tmp = a;
	int sum = 0;
	int len = len_stack(&a);

	while (tmp)
	{
		// printf(MAGENTA "num%d:index:%d\n", tmp->num, tmp->index);
		sum += tmp->index;
		tmp = tmp->next;
	}
	sum /= len;
	return (sum);
}

// void major_b(t_stack **a, t_stack **b)
// {
// 	int i = 0;
// 	// int pivot = len_stack(a) / 2 - 1;
// 	int pivot = index_middle(*a);

// 	while (i <= pivot)
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

void minors_b(t_stack **a, t_stack **b)
{
	int i;
	int pivot;

	i = len_stack(a) / 2;
	pivot = index_middle(*a);
	while (i != 0)
	{
		while ((*a)->index > pivot)
			ra_rb(a, RA);
		while ((*a)->index <= pivot)
		{
			pa_pb(a, b, PB);
			if (i > 0)
				i--;
		}
	}
}

void quick_sort(t_stack **a, t_stack **b)
{
	if (len_stack(a) <= 1)
		return;
	int pivot = index_middle(*a);
	t_stack *tmp = *a;
	while (tmp)
	{
		if (tmp->index < pivot)
			sa_sb(a, SA);
		else
			pa_pb(a, b, PB);
		tmp = (*a);
	}
	quick_sort(a, b);
	quick_sort(&(*b), a);
	while (*b)
		pa_pb(a, b, PA);
}

void sort_more(t_stack **a, t_stack **b, int size)
{
	(void)size;
	// minors_b(a, b);
	quick_sort(a, b);
	// sort_five(a, b);
	// minors_b(a, b, size);

	// mitad_inf_a(a, b, size);
	// invertir_mitad(a, b, size);
}
