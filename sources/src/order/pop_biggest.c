/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_biggest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:56:43 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/29 14:41:56 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void static	sort_top(t_stack **b, t_data *data, int big)
{
	while (tp_is_act(data->tp, big - 1))
	{
		rra_rrb(b, RRB);
		switch_tp(data->tp, (*b)->index - 1, OFF);
	}
	if (big != (*b)->index)
	{
		switch_tp(data->tp, (*b)->index - 1, ON);
		ra_rb(b, RB);
	}
}

void static	sort_back(t_stack **b, t_data *data, int big)
{
	while (tp_is_act(data->tp, big - 1) && big != (*b)->index)
	{
		switch_tp(data->tp, (*b)->index - 1, OFF);
		ra_rb(b, RB);
	}
	if (big != (*b)->index)
	{
		rra_rrb(b, RRB);
		switch_tp(data->tp, (*b)->index - 1, ON);
	}
}

int static	find_chunk(int big, int n, t_data *data)
{
	int	i;
	int	middle;
	int	end;

	i = n - 1;
	while (i >= 0)
	{
		middle = data->chunk[i][MIDDLE];
		end = data->chunk[i][END];
		if (big > middle && big <= end)
			return (1);
		i--;
	}
	return (0);
}

void	pop_biggest(t_stack **a, t_stack **b, t_data *data, int n)
{
	int	big;

	ft_bzero(data->tp, data->size * sizeof(int));
	while ((*b) && (*b)->next)
	{
		big = find_big((*b));
		if (find_chunk(big, n, data) && big != (*b)->index)
			sort_top(b, data, big);
		else if (!find_chunk(big, n, data) && big != (*b)->index)
			sort_back(b, data, big);
		if (big == (*b)->index)
			pa_pb(a, b, PA);
		if ((*b) && !(*b)->next)
			pa_pb(a, b, PA);
	}
}
