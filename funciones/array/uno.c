/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uno.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 11:00:40 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/05 11:34:58 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 12
#define UNIQUE_NUMS 5

int	main(void)
{
	int	num_added;
	int	i;

	int array[ARRAY_SIZE] = {0}; // Inicializar todos los elementos en cero.
	num_added = 0;
	srand(time(NULL));
	// Inicializar la semilla del generador de números aleatorios.
	// Agregar 5 números únicos aleatorios al array.
	while (num_added < UNIQUE_NUMS)
	{
		int num = rand() % 5 + 1; // Generar un número aleatorio entre 1 y 5.
		int unique = 1;           // Suponemos que el número generado es único.
		// Verificar si el número generado ya está en el array.
		for (i = 0; i < ARRAY_SIZE; i++)
		{
			if (array[i] == num)
			{
				unique = 0; // El número no es único.
				break ;
			}
		}
		// Si el número es único, agregarlo al array.
		if (unique)
		{
			array[num_added] = num;
			num_added++;
		}
	}
	// Agregar números aleatorios adicionales hasta llenar el array.
	while (num_added < ARRAY_SIZE)
	{
		int num = rand() % 5 + 1; // Generar un número aleatorio entre 1 y 5.
		int unique = 1;           // Suponemos que el número generado es único.
		// Verificar si el número generado ya está en el array.
		for (i = 0; i < ARRAY_SIZE; i++)
		{
			if (array[i] == num)
			{
				unique = 0; // El número no es único.
				break ;
			}
		}
		// Si el número es único, agregarlo al array.
		if (unique)
		{
			array[num_added] = num;
			num_added++;
		}
	}
	// Imprimir el array resultante.
	printf("El array resultante es:\n");
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return (0);
}
