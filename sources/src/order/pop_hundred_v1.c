/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_hundred_v1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:56:43 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/25 14:14:19 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

int static	find_big(t_stack *stack)
{
	int	num;

	num = stack->index;
	while (stack && stack->next)
	{
		if (num < stack->next->index)
			num = stack->next->index;
		stack = stack->next;
	}
	return (num);
}

void static	sort_top(t_stack **b, t_data *data)
{
	// si el numero que busco esta abajo lo subo,
	while (tp_is_act(data->tp, find_big((*b)) - 1))
	{
		rra_rrb(b, RRB);
		switch_tp(data->tp, (*b)->index - 1, OFF);
	}
	if (find_big((*b)) != (*b)->index) // no es el numero que busco
	{
		switch_tp(data->tp, (*b)->index - 1, ON);
		ra_rb(b, RB);
	}
	// if (find_big((*b)) == (*b)->index)
	// 	pa_pb(a, b, PA);
	// if ((*b) && !(*b)->next)
	// 	pa_pb(a, b, PA);
}

void	flag(int num, t_data *data)
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
	// printf(YELLOW "\tmd_one: %d\n", md_one);
	// printf(MAGENTA "one: %d\n", one);
	// printf(YELLOW "\tmd_two: %d\n", md_two);
	// printf(MAGENTA "two: %d\n", two);
	// printf(YELLOW "\tmd_three: %d\n", md_three);
	// printf(MAGENTA "three: %d\n", three);
	if ((num > md_three && num <= three) || (num > md_two && num <= two)
		|| (num > md_one && num <= one))
		data->flag = OFF;
	else if ((num >= two && num < md_three) || (num >= one < md_two)
			|| (num >= 1 && num < md_one))
		data->flag = ON;
}

void static	sort_back(t_stack **b, t_data *data)
{
	// si el numero que busco lo subi ahora lo bajo
	while (tp_is_act(data->tp, find_big((*b)) - 1))
	{
		if (find_big((*b)) == last_index((*b)))
			break ;
		ra_rb(b, RB);
		switch_tp(data->tp, (*b)->index - 1, OFF);
	}
	// if (find_big((*b)) != (*b)->index) // no es el numero que busco
	if (find_big((*b)) != last_index((*b))) // no es el numero que busco
	{
		switch_tp(data->tp, last_index((*b)) - 1, ON);
		rra_rrb(b, RRB);
	}
	else if (find_big((*b)) == last_index((*b)))
		rra_rrb(b, RRB);
	// print_tp(data);
}

void	pop_hundred(t_stack **a, t_stack **b, t_data *data)
{
	int	big;
	int	last;

	ft_bzero(data->tp, data->size * sizeof(int));
	while ((*b) && (*b)->next)
	{
		big = find_big((*b));
		last = last_index((*b));
		flag(big, data);
		if ((*b) && !(*b)->next)
			pa_pb(a, b, PA);
		if (!data->flag)
		{
			sort_top(b, data);
		}
		else if (data->flag)
		{
			sort_back(b, data);
		}
		if (big == (*b)->index)
			pa_pb(a, b, PA);
	}
}

// md_one : 5
// one: 10
// 	md_two: 15
// two: 20
// 	md_three: 25
// three: 30
