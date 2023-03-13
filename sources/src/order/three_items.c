/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_items.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:06:15 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/13 15:35:05 by nmota-bu         ###   ########.fr       */
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

// ORDENA TODOS EN EL A
void sort_five(t_data *data)
{
	int i = 0;
	int lap = 0;

	while (lap < data->size)
	{
		while (i < data->size - 1)
		{
			if (data->a.stack[i] > data->a.stack[i + 1])
				swap(&data->a.stack[i], &data->a.stack[i + 1]);
			i++;
		}
		i = 0;
		lap++;
	}
	i = 0;
	while (i < data->size)
	{
		printf(GREEN "%d :%d\n", data->a.stack[i], i);
		i++;
	}
}
