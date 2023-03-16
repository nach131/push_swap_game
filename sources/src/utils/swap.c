/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:46:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/17 00:48:20 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void swap_t(t_num *a, t_num *b)
{
	t_num t = *a;
	*a = *b;
	*b = t;
}

// Intercambia los dos primeros elementos encima del stack a
// No hace nada si hay uno o menos elementos.
void sa(t_data *data)
{
	int top;

	if (data->a.top > 0)
	{
		top = data->a.top;
		swap_t(&data->a.stack[top], &data->a.stack[top - 1]);
	}

	ft_printf("sa\n");
}

// Intercambia los dos primeros elementos encima del stack b
// No hace nada si hay uno o menos elementos.
void sb(t_data *data)
{
	if (data->b.top > 0)
		swap_t(&data->b.stack[0], &data->b.stack[1]);
	ft_printf("sb\n");
}

// Los dos a la vez
void ss(t_data *data)
{
	sa(data);
	sb(data);
}
