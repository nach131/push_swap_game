/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:06:15 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/22 16:07:06 by nmota-bu         ###   ########.fr       */
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

void sort_hundred(t_stack **a, t_stack **b, int size)
{
	(void)size;
	(void)a;
	(void)b;
	printf("sort_hundred\n");
	// minors_b(a, b);
	// quick_sort(a, b);
	// sort_five(a, b);
	// minors_b(a, b, size);

	// mitad_inf_a(a, b, size);
	// invertir_mitad(a, b, size);
}
