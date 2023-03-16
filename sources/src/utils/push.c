/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:39:48 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/16 18:36:22 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

// añade valores al stack
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

t_num push_num(int num, int *top)
{
	t_num res;

	res.num = num;
	res.index = -1;
	*top = *top + 1;
	return (res);
}
// NO LO USO

// int pop(t_ps *stack, int *top)
// {
// 	int value;

// 	if (stack->top == -1)
// 	{
// 		ft_message(DANGER, ERROR_5);
// 		exit(1);
// 	}
// 	value = stack->stack[*top];
// 	*top = *top - 1;
// 	return value;
// }

//  Toma el primer elemento del stack b y lo pone encima del stack a.
// No hace nada si b está vacío.

// void pa(t_data *data)
// {
// 	int i;
// 	if (data->b.top >= 0)
// 	{
// 		if (data->a.top >= 0)
// 		{
// 			data->a.top++;
// 			i = data->a.top - 1;
// 			while (i >= 0)
// 			{
// 				swap(&data->a.stack[i], &data->a.stack[i + 1]);
// 				i--;
// 			}
// 			swap(&data->b.stack[0], &data->a.stack[0]);
// 		}
// 		else
// 			push(data->a.stack, &data->a.top, data->b.stack[0], data->size);
// 		rb(data);
// 		data->b.top--;
// 	}
// 	ft_printf("pa\n");
// }

// Toma el primer elemento del stack A y lo pone encima del stack B.
// No hace nada si A está vacío.

// void pb(t_data *data)
// {
// 	int i;
// 	if (data->a.top >= 0)
// 	{
// 		if (data->b.top >= 0)
// 		{
// 			data->b.top++;
// 			i = data->b.top - 1;
// 			while (i >= 0)
// 			{
// 				swap(&data->b.stack[i], &data->b.stack[i + 1]);
// 				i--;
// 			}
// 			swap(&data->a.stack[0], &data->b.stack[0]);
// 		}
// 		else
// 			push(data->b.stack, &data->b.top, data->a.stack[0], data->size);
// 		ra(data);
// 		data->a.top--;
// 	}
// 	ft_printf("pb\n");
// }
