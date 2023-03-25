/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:29:47 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/25 10:23:03 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void	one_chunk(t_stack **a, t_stack **b, t_data *data)
{
	int	one;
	int	md_one;

	one = data->size / 3;
	md_one = one / 2;
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
			ra_rb(a, RA);
	}
}

void	two_chunk(t_stack **a, t_stack **b, t_data *data)
{
	int	one;
	int	two;
	int	md_two;

	one = data->size / 3;
	two = 2 * (data->size / 3);
	md_two = (one + two) / 2;
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
			ra_rb(a, RA);
	}
}

void	three_chunk(t_stack **a, t_stack **b, t_data *data)
{
	int	two;
	int	three;
	int	md_three;

	two = 2 * (data->size / 3);
	three = data->size;
	md_three = (two + three) / 2;
	while (ctrl_pb(data->tp, two, three - 1))
	{
		if (((*a)->index <= three))
		{
			switch_tp(data->tp, (*a)->index - 1, ON);
			pa_pb(a, b, PB);
			if (((*b)->index <= md_three))
				ra_rb(b, RB);
		}
		if ((*a))
			if (((*a)->index > three))
				ra_rb(a, RA);
	}
}

void	push_hundred(t_stack **a, t_stack **b, t_data *data)
{
	ft_bzero(data->tp, data->size * sizeof(int));
	one_chunk(a, b, data);
	two_chunk(a, b, data);
	three_chunk(a, b, data);
	//pasar a A
	// pop_hundred(a, b, data);
}

// 	one/2: 5
// one: 10
// 	two/2: 15
// two: 20
// 	three/2: 25
// three: 30
