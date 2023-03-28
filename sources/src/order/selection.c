/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:51:38 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/27 17:00:56 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void	print_temporal(t_data *data)
{
	int	two;
	int	three;
	int	md_three;
	int	one;
	int	md_one;
	int	md_two;

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
}

void	selection(t_stack **a, t_stack **b, t_data *data)
{
	if (data->size == 2)
		sa_sb(a, SA);
	else if (data->size == 3)
		sort_three(a);
	else if (data->size > 3 && data->size <= 5)
		sort_five(a, b);
	else if (data->size > 5 && data->size <= 100)
	{
		push_biggest(a, b, data, 3);
		pop_biggest(a, b, data);
		free_chunk(data->chunk, 3);
	}
	else
	{
		push_biggest(a, b, data, 6);
		pop_biggest(a, b, data);
		free_chunk(data->chunk, 6);
	}
}

// poner el uno solo free_chunk al finalde pop pasando n
