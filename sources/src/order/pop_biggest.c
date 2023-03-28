/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_biggest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:56:43 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/27 21:46:05 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void	sort_top(t_stack **b, t_data *data, int big)
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

//ESTA MAL
void	sort_back(t_stack **b, t_data *data, int big)
{
	while (tp_is_act(data->tp, big - 1) && big != (*b)->index)
	{
		switch_tp(data->tp, (*b)->index - 1, OFF);
		ra_rb(b, RB);
	}
	if (big != (*b)->index)
	{
		rra_rrb(b, RB);
		switch_tp(data->tp, (*b)->index - 1, ON);
	}
}

void	pop_biggest(t_stack **a, t_stack **b, t_data *data)
{
	int	big;
	int	last;

	ft_bzero(data->tp, data->size * sizeof(int));
	while ((*b) && (*b)->next)
	{
		last = last_index((*b));
		big = find_big((*b));
		if ((big > data->chunk[2][MIDDLE] && big <= data->chunk[2][END])
			|| (big > data->chunk[1][MIDDLE] && big <= data->chunk[1][END])
			|| (big > data->chunk[0][MIDDLE] && big <= data->chunk[0][END]))
		{
			sort_top(b, data, big);
		}
		else
		{
			sort_back(b, data, big);
		}
		if (big == (*b)->index)
			pa_pb(a, b, PA);
		if ((*b) && !(*b)->next)
			pa_pb(a, b, PA);
	}
}

// void	pop_biggest(t_stack **a, t_stack **b, t_data *data)
// {
// 	ft_bzero(data->tp, data->size * sizeof(int));
// 	while ((*b) && (*b)->next)
// 	{
// 		while (tp_is_act(data->tp, find_big((*b)) - 1))
// 		{
// 			rra_rrb(b, RRB);
// 			switch_tp(data->tp, (*b)->index - 1, OFF);
// 		}
// 		if (find_big((*b)) != (*b)->index)
// 		{
// 			switch_tp(data->tp, (*b)->index - 1, ON);
// 			ra_rb(b, RB);
// 		}
// 		if (find_big((*b)) == (*b)->index)
// 			pa_pb(a, b, PA);
// 		if ((*b) && !(*b)->next)
// 			pa_pb(a, b, PA);
// 	}
// }
