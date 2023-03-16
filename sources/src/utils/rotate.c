/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:47:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/16 23:07:00 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

// Desplaza hacia arriba todos los elementos del stack A una posición,
// de forma que el primer elemento se convierte en el último.

void ra(t_data *data)
{
	int i;

	t_num first;
	i = 0;
	if (data->a.top > 0)
	{
		first = data->a.stack[0];
		while (i <= data->a.top)
		{
			swap_t(&data->a.stack[i], &data->a.stack[i + 1]);
			i++;
		}
		swap_t(&first, &data->a.stack[data->a.top]);
	}
	ft_printf("ra\n");
}

// Desplaza hacia arriba todos los elementos del stack B una posición,
// de forma que el primer elemento se convierte en el último.

void rb(t_data *data)
{
	int i;

	t_num first;
	i = 0;
	if (data->b.top > 0)
	{
		first = data->b.stack[0];
		while (i <= data->b.top)
		{
			swap_t(&data->b.stack[i], &data->b.stack[i + 1]);
			i++;
		}
		swap_t(&first, &data->b.stack[data->b.top]);
	}
	ft_printf("rb\n");
}

//  Desplaza al mismo tiempo todos los elementos del stack A
// y del stack B una posición hacia arriba,
//  de forma que el primer elemento se convierte en el último.

void rr(t_data *data)
{
	ra(data);
	rb(data);
}
