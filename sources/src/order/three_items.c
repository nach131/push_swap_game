/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_items.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:06:15 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/14 14:42:24 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void sort_three(t_data *data)
{
	int one;
	int two;
	int three;

	one = data->a.stack[0];
	two = data->a.stack[1];
	three = data->a.stack[2];

	if (one > two && two < three)
	{
		sa(data);
		rra(data);
	}
	else if (one > two && one < three)
		sa(data);
	else if (one < two && one > three)
		rra(data);
	else if (one < two && two > three)
	{
		sa(data);
		ra(data);
	}
	else if (one > two && one > three)
		rra(data);
}

// // ORDENA TODOS EN EL A
// void sort_five(t_data *data)
// {
// 	int i = 0;
// 	int lap = 0;

// 	while (lap < data->size)
// 	{
// 		while (i < data->size - 1)
// 		{
// 			if (data->a.stack[i] > data->a.stack[i + 1])
// 				swap(&data->a.stack[i], &data->a.stack[i + 1]);
// 			i++;
// 		}
// 		i = 0;
// 		lap++;
// 	}
// }

void sort_five(t_data *data)
{
	int i, min, max;
	(void)min;
	(void)max;
	while (data->a.top >= 0)
	{
		// Step 1
		min = data->a.stack[0];
		for (i = 1; i <= data->a.top; i++)
		{
			if (data->a.stack[i] < min)
				min = data->a.stack[i];
		}
		while (data->a.top >= 0 && data->a.stack[data->a.top] != min)
		{
			if (data->a.top > 0 && data->a.stack[0] > data->a.stack[1])
				sa(data);
			pb(data);
		}

		// // Step 3
		// max = data->b.stack[0];
		// for (i = 1; i <= data->b.top; i++)
		// {
		// 	if (data->b.stack[i] > max)
		// 		max = data->b.stack[i];
		// }
		// while (data->b.top >= 0 && data->b.stack[data->b.top] != max)
		// {
		// 	if (data->b.top > 0 && data->b.stack[0] < data->b.stack[1])
		// 		sb(data);
		// 	pa(data);
		// }
	}

	// // Step 5
	// while (data->a.stack[data->a.top] != min)
	// 	rra(data);
}

void sort_big(t_data *data)
{
	while (data->a.top >= 0)
	{
		int smallest = data->a.stack[0];
		int smallest_index = 0;
		int i = 0;

		while (i <= data->a.top)
		{
			if (data->a.stack[i] < smallest)
			{
				smallest = data->a.stack[i];
				smallest_index = i;
			}
			i++;
		}
		while (smallest_index > 0)
		{
			ra(data);
			smallest_index--;
		}
		pb(data);
	}
	while (data->b.top >= 0)
	{
		pa(data);
	}
}

// 3->
// 5->

// 100-> 2805, 2993,2948
// 500-> 66679
