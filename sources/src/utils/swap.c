/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:46:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/08 17:39:15 by nmota-bu         ###   ########.fr       */
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
void sa(t_ps *data)
{
	if (data->len >= 2)
		swap(&data->stack_a[0], &data->stack_a[1]);
}

// intercambia los dos primeros elementos encima del stack b
void sb(t_ps *data)
{
	if (data->len >= 2)
		swap(&data->stack_b[0], &data->stack_b[1]);
}

// Los dos a la vez
void ss(t_ps *data)
{
	sa(data);
	sb(data);
}
