/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:17:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/26 10:08:16 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

int	len_stack(t_stack **stack)
{
	t_stack	*tmp;
	int		i;

	tmp = *stack;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	find_small(t_stack **stack)
{
	int		pivot;
	t_stack	*tmp;

	pivot = (*stack)->index;
	tmp = (*stack)->next;
	while (tmp)
	{
		if (tmp->index < pivot)
			pivot = tmp->index;
		tmp = tmp->next;
	}
	return (pivot);
}

int	find_big(t_stack *stack)
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

// int	first_inx(t_stack *stack)
// {
// 	return (stack->index);
// }

// int	last_index(t_stack *stack)
// {
// 	int	num;

// 	if (!stack)
// 		return (0);
// 	while (stack)
// 	{
// 		num = stack->index;
// 		stack = stack->next;
// 	}
// 	return (num);
// }
