/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:29:47 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/23 08:32:06 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void sort_hundred(t_stack **a, t_stack **b, t_data *data)
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

	// while (!ctrl_pb(data->tp, 0, one))
	// {

	// printf(RED "%d\n", !ctrl_pb(data->tp, 0, one));
	// printf(RED "%d\n", ctrl_pb(data->tp, 0, one));

	while (ctrl_pb(data->tp, 0, one - 1))
	{
		if (((*a)->index <= one))
		{
			switch_tp(data->tp, (*a)->index - 1, ON);
			pa_pb(a, b, PB);
			if (((*b)->index <= md_one))
				ra_rb(b, RB);
		}
		if (((*a)->index > one))
		{
			ra_rb(a, RA);
		}
	}

	while (ctrl_pb(data->tp, one, two - 1))
	{
		if (((*a)->index <= two))
		{
			switch_tp(data->tp, (*a)->index - 1, ON);
			pa_pb(a, b, PB);
			if (((*b)->index <= md_two))
				ra_rb(b, RB);
		}
		if (((*a)->index > two))
		{
			ra_rb(a, RA);
		}
	}

	while (ctrl_pb(data->tp, two, three - 1))
	{
		if (((*a)->index <= three))
		{
			switch_tp(data->tp, (*a)->index - 1, ON);
			pa_pb(a, b, PB);
			if (((*b)->index <= md_three))
				ra_rb(b, RB);
		}
		if (((*a)->index > three))
		{
			ra_rb(a, RA);
		}
	}

	// if (((*a)->index <= one))
	// {
	// switch_tp(data->tp, (*a)->index - 1, ON);
	// pa_pb(a, b, PB);
	// if (((*b)->index <= md_one))
	// 	ra_rb(b, RB);
	// }
	// ctrl_pb(data->tp, 0, one);
	// ctrl_pb(data->tp, one + 1, two);
	// ctrl_pb(data->tp, two + 1, data->size);
	print_tp(data);
}
