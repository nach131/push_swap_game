/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:29:47 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/25 15:12:19 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void	chunk(t_stack **a, t_stack **b, t_data *data, int type)
{
	int	star;
	int	middle;
	int	end;

	if (type == 0)
	{
		star = 0;
		end = data->size / 3;
		middle = end / 2;
	}
	else if (data->chunk == 1)
	{
		star = data->size / 3;
		end = 2 * (data->size / 3);
		middle = (star + end) / 2;
	}
	else
	// (data->chunk == 2)
	{
		star = 2 * (data->size / 3);
		end = data->size;
		middle = (star + end) / 2;
	}
	while (ctrl_pb(data->tp, star, end - 1))
	{
		if (((*a)->index <= end))
		{
			switch_tp(data->tp, (*a)->index - 1, ON);
			pa_pb(a, b, PB);
			if (((*b)->index <= middle))
				ra_rb(b, RB);
		}
		if ((*a))
			if (((*a)->index > end))
				ra_rb(a, RA);
	}
}

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

void	print_cal(t_data *data)
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
	printf(YELLOW "\tmd_one: %d\n", md_one);
	printf(MAGENTA "one: %d\n", one);
	printf(YELLOW "\tmd_two: %d\n", md_two);
	printf(MAGENTA "two: %d\n", two);
	printf(YELLOW "\tmd_three: %d\n", md_three);
	printf(MAGENTA "three: %d\n", three);
}

void	push_hundred(t_stack **a, t_stack **b, t_data *data)
{
	ft_bzero(data->tp, data->size * sizeof(int));
	chunk(a, b, data, 0);
	chunk(a, b, data, 1);
	chunk(a, b, data, 2);
	// one_chunk(a, b, data);
	// two_chunk(a, b, data);
	// three_chunk(a, b, data);
	print_cal(data);
}

// 	one/2: 5
// one: 10
// 	two/2: 15
// two: 20
// 	three/2: 25
// three: 30
