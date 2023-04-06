/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rando_to_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 20:16:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/05 20:35:42 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 18
#define UNIQUE_NUMS 18

void	print_arr(int arr[])
{
	int	i;

	i = 0;
	while (i < ARRAY_SIZE)
	{
		printf("%d ", arr[i]);
		i++;
	}
}

int	main(void)
{
	int	num_added;
	int	unique;
	int	i;
	int	num;

	num_added = 0;
	int array[ARRAY_SIZE] = {0}; // Inicializar todos los elementos en cero.
	while (num_added < UNIQUE_NUMS)
	{
		num = rand() % UNIQUE_NUMS + 1;
		// Generar un número aleatorio entre 1 y 5.
		unique = 1;
		i = 0;
		while (i < ARRAY_SIZE)
		{
			if (array[i] == num)
			{
				unique = 0;
				break ;
			}
			i++;
		}
		if (unique)
		{
			array[num_added] = num;
			num_added++;
		}
		printf("%d\n", num);
	}
	print_arr(array);
	return (0);
}
