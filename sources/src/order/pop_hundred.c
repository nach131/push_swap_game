/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_hundred.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:56:43 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/23 16:24:48 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void	pop_hundred(t_stack **a, t_stack **b, t_data *data)
{
	int	one;
	int	two;
	int	three;
	int	md_one;
	int	md_two;
	int	md_three;

	(void)a;
	(void)b;
	ft_bzero(data->tp, data->size * sizeof(int));
	one = data->size / 3;
	two = 2 * (data->size / 3);
	three = data->size;
	md_one = one / 2;
	md_two = (one + two) / 2;
	md_three = (two + three) / 2;
	printf(YELLOW "\tone/2: %d\n", md_one);
	printf(MAGENTA "one: %d\n", one);
	printf(YELLOW "\ttwo/2: %d\n", md_two);
	printf(MAGENTA "two: %d\n", two);
	printf(YELLOW "\tthree/2: %d\n", md_three);
	printf(MAGENTA "three: %d\n", three);
	// print_tp(data);
}
