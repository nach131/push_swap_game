/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:29:47 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/22 16:50:52 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

// ft_bzero(data.tp, data.size * sizeof(int))

void sort_hundred(t_stack **a, t_stack **b, t_data *data)
{
	(void)a;
	(void)b;
	ft_bzero(data->tp, data->size * sizeof(int));
	print_tp(data);

	// minors_b(a, b);
	// quick_sort(a, b);
	// sort_five(a, b);
	// minors_b(a, b, size);

	// mitad_inf_a(a, b, size);
	// invertir_mitad(a, b, size);
}
