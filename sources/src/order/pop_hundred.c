/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_hundred.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:56:43 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/24 12:46:26 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void	print_arr(int arr[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf(RED "%d:%d ", i, arr[i]);
		i++;
	}
	printf("\n");
}

// void	pop_hundred(t_stack **a, t_stack **b, t_data *data)
// {
// 	int	two;
// 	int	three;
// 	int	md_three;
// 	int	i;
// 	int	arr[data->size - 2];

// 	// int	one;
// 	// int	md_one;
// 	// int	md_two;
// 	ft_bzero(arr, data->size * sizeof(int));
// 	ft_bzero(data->tp, data->size * sizeof(int));
// 	// one = data->size / 3;
// 	two = 2 * (data->size / 3);
// 	three = data->size;
// 	// md_one = one / 2;
// 	// md_two = (one + two) / 2;
// 	md_three = (two + three) / 2;
// 	// printf(YELLOW "\tone/2: %d\n", md_one);
// 	// printf(MAGENTA "one: %d\n", one);
// 	// printf(YELLOW "\ttwo/2: %d\n", md_two);
// 	// printf(MAGENTA "two: %d\n", two);
// 	// printf(YELLOW "\tthree/2: %d\n", md_three);
// 	// printf(MAGENTA "three: %d\n", three);
// 	i = 30;
// 	while (ctrl_pb(data->tp, md_three, three - 1))
// 	{
// 		if ((*b)->index > md_three && (*b)->index != i)
// 		{
// 			switch_tp(data->tp, (*b)->index - 1, BACK);
// 			ra_rb(b, RB);
// 		}
// 		else if ((*b)->index == i)
// 		{
// 			pa_pb(a, b, PA);
// 			switch_tp(data->tp, i - 1, ON);
// 			i--;
// 		}
// 		while (stack_last((*b))->index <= i
// 			&& stack_last((*b))->index > md_three
// 			&& stack_last((*b))->index == i)
// 			rra_rrb(b, RRB);
// 		printf(MAGENTA "back_i:%d\n", i);
// 		// // print_lst((*a));
// 		// print_lst((*b));
// 	}
// 	print_arr(arr, data->size);
// 	print_tp(data);
// }

int	find_num(t_stack *stack, int type)
{
	int	num;

	num = stack->index;
	while (stack && stack->next)
	{
		if (num < stack->next->index)
			num = stack->next->index;
		stack = stack->next;
	}
	if (type == 0)
		return (num);
	else if (type == 1)
		return (num - 1);
	else
		return (num - 2);
}

void	pop_hundred(t_stack **a, t_stack **b, t_data *data)
{
	ft_bzero(data->tp, data->size * sizeof(int));
	while ((*b) && (*b)->next)
	{
		while (tp_is_act(data->tp, find_num((*b), 0) - 1))
		{
			rra_rrb(b, RRB);
			switch_tp(data->tp, (*b)->index - 1, OFF);
		}
		if (find_num((*b), 0) != (*b)->index)
		{
			switch_tp(data->tp, (*b)->index - 1, ON);
			ra_rb(b, RB);
		}
		if (find_num((*b), 0) == (*b)->index)
		{
			pa_pb(a, b, PA);
		}
	}
	print_tp(data);
}
