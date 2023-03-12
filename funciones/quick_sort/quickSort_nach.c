/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quickSort_nach.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:15:36 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/12 21:40:38 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

void print_arr(int *arr, int size)
{
	int i = 0;
	while (i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}
}

int main(int n, char **str)
{
	int stack[n - 1];
	int i = 1;
	int j = 0;
	while (i < n)
	{
		stack[j] = atoi(str[i]);
		j++;
		i++;
	}

	// int n = sizeof(stack1) / sizeof(stack1[0]);

	quickSort(stack, 0, n - 2);

	// printf("Original : ");
	// print_arr(stack, n - 1);

	// printf("\n");

	printf("Ordenado: ");
	print_arr(stack, n - 1);
	printf("\n");

	return 0;
}
