/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:52:01 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/12 23:23:42 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void order_three(t_data *data)
{
	int one;
	int two;
	int three;

	one = data->a.stack[0];
	two = data->a.stack[1];
	three = data->a.stack[2];
	if (one < two && one < three && two > three)
	{
		rra(data);
		sa(data);
	}
	else if (one > two && one < three && two < three)
		sa(data);
	else if (one < two && one > three && two > three)
		rra(data);
	else if (two < three && one > two && one > three)
		ra(data);
	else if (two > three && one > two && one > three)
	{
		ra(data);
		sa(data);
	}
}

int partition(int arr[], int low, int high)
{
	int pivot;
	int i;
	int j;

	pivot = arr[high];
	i = (low - 1);
	j = low;
	while (j <= high)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
		j++;
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi;

		pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
