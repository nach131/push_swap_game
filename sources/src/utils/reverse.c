/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:47:14 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/09 21:14:30 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

// desplaza hacia abajo todos los elementos del stack a una posición,
// de forma que el último elemento se convierte en el primero.

void rra(t_data *data)
{
	int i;

	int last;
	i = data->a.top - 1;
	ft_printf(MAGENTA "%d\n", data->a.top);
	if (data->a.top > 0)
	{
		last = data->a.stack[data->a.top];
		while (i >= 0)
		{
			swap(&data->a.stack[i], &data->a.stack[i + 1]);
			i--;
		}
		swap(&last, &data->a.stack[0]);
	}
}
