/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:51:38 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/19 14:37:18 by nmota-bu         ###   ########.fr       */
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

void selection(t_stack **a, t_stack **b, int size)
{
	if (size == 2)
	{
		sa_sb(a, SA);
		(void)b;
	}
	else if (size == 3)
	{
		sort_three(a);
		(void)b;
	}

	// else if (data->size == 3)
	// 	sort_three(data);
	// else if (data->size > 3 && data->size <= 5)
	// 	sort_five(data);
	// else if (data->size > 5 && data->size < 100)
	// 	printf("NADA TODABIA\n");
	// else
	// 	sort_big(data);

	// quickSort(data->a.stack, 0, data->size - 1);
	// quickSort(data, 0, data->size - 1);
	// sort_stack(data);
}
