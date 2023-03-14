/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:51:38 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/14 13:53:45 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

// void sort_stack(t_data *data)
// {
// 	int size = data->size;

// 	// Ordenar la pila B
// 	quickSort(data, 0, size - 1);

// 	// Mover los elementos de la pila B a la pila A
// 	while (data->b.top >= 0)
// 		pa(data);

// 	// Ordenar la pila A
// 	quickSort(data, 0, size - 1);
// }

void selection(t_data *data)
{
	if (data->size == 2)
		sa(data);
	else if (data->size == 3)
		sort_three(data);
	else if (data->size > 3 && data->size <= 5)
		sort_five(data);
	else if (data->size > 5 && data->size < 100)
		printf("NADA TODABIA\n");
	else
		sort_big(data);

	// quickSort(data->a.stack, 0, data->size - 1);
	// quickSort(data, 0, data->size - 1);
	// sort_stack(data);
}
