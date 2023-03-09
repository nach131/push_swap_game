/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:46:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/09 11:06:24 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// intercambia los dos primeros elementos encima del stack a
// No hace nada si hay uno o menos elementos.
void sa(t_data *data)
{
	if (data->a.top > 0)
		swap(&data->a.stack[0], &data->a.stack[1]);
}

// intercambia los dos primeros elementos encima del stack b
// No hace nada si hay uno o menos elementos.
void sb(t_data *data)
{
	if (data->b.top > 0)
		swap(&data->b.stack[0], &data->b.stack[1]);
}

// Los dos a la vez
void ss(t_data *data)
{
	sa(data);
	sb(data);
}
