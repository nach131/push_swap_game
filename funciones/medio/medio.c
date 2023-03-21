/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medio.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:49:07 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/21 15:51:37 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>

int main(void)
{

	int arr[] = {9, 1, 2, 8, 6, 5, 7, 4, 3, 0};
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	int avg = sum / n;
	// float avg = (float)sum / n;
	printf("El número medio de la matriz es: %d/n", avg);
	return (0);
}
