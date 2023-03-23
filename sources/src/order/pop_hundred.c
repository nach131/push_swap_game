/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_hundred.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:56:43 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/23 13:11:24 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void pop_hundred(t_stack **a, t_stack **b, t_data *data)
{
	(void)a;
	(void)b;
ft_bzero(data->tp, data->size * sizeof(int));

	int one = data->size / 3;
	int two = 2 * (data->size / 3);
	int three = data->size;

	int md_one = one / 2;
	int md_two = (one + two) / 2;
	int md_three = (two + three) / 2;

	printf(YELLOW "\tone/2: %d\n", md_one);
	printf(MAGENTA "one: %d\n", one);
	printf(YELLOW "\ttwo/2: %d\n", md_two);
	printf(MAGENTA "two: %d\n", two);
	printf(YELLOW "\tthree/2: %d\n", md_three);
	printf(MAGENTA "three: %d\n", three);

	// print_tp(data);

}
