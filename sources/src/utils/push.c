/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:39:48 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/09 10:49:43 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void push(int *stack, int *top, int value, int size)
{
	if (*top >= size - 1)
	{
		ft_message(DANGER, ERROR_4);
		exit(1);
	}
	*top = *top + 1;
	stack[*top] = value;
}

// //  toma el primer elemento del stack b y lo pone encima del stack a.
// // No hace nada si b está vacío.
// void pa(t_ps *data)
// {
// 	if (top_b >= 0)
// 	{
// 		int value = pop(stack_b, &top_b);
// 		push(stack_a, &top_a, value);
// 	}
// }
