/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:52:01 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/13 14:00:36 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

int partition(t_data *data, int low, int high)
{
	int pivot = data->b.stack[high];
	int i = low - 1;

	for (int j = low; j <= high - 1; j++)
	{
		if (data->b.stack[j] < pivot)
		{
			i++;
			swap(&data->b.stack[i], &data->b.stack[j]);
		}
	}

	swap(&data->b.stack[i + 1], &data->b.stack[high]);
	i++;

	while (i--)
		pb(data);

	return i + 1;
}

void quickSort(t_data *data, int low, int high)
{
	if (low < high)
	{
		int pi = partition(data, low, high);
		quickSort(data, low, pi - 1);
		quickSort(data, pi + 1, high);
	}
}
