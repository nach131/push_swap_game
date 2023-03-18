/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:39:48 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/18 16:51:33 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

// Añade valores al stack tp

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

void push_t(t_ps ps, int *top, t_num num)
{

	*top = *top + 1;
	ps.stack[ps.top] = num;
}

// Toma el primer elemento del stack B y lo pone encima del stack A.
// No hace nada si B está vacío.

// void pa(t_data *data)
// {
// 	// Verificar si el stack b está vacío
// 	if (data->b.top < 0)
// 		return; // No hacer nada

// 	// Obtener el elemento en la cima de b
// 	t_num *num = &data->b.stack[data->b.top];

// 	// Empujar el elemento a la cima de a
// 	data->a.top++;
// 	data->a.stack[data->a.top] = *num;

// 	// Eliminar el elemento de la cima de b
// 	data->b.top--;
// 	// if (data->b.top >= 0)
// 	// 	rb(data);
// }

// void pa(t_data *data)
// {

// 	if (data->b.top >= 0)
// 	{
// 		data->a.top++;
// 		swap_t(&data->a.stack[data->a.top], &data->b.stack[data->b.top]);
// 		data->b.top--;
// 	}
// 	ft_printf("ra\n");
// }

void pa(t_data *data)
{
	if (data->b.top >= 0) // si el stack B no está vacío
	{
		// sacamos el elemento del stack B y lo ponemos en el stack A
		data->a.top++;
		data->a.stack[data->a.top] = data->b.stack[data->b.top];
		data->b.stack[2].num = 1000;

		// data->b.top--;
	}
}

// Toma el primer elemento del stack A y lo pone encima del stack B.
// No hace nada si A está vacío.

void pb(t_data *data)
{
	int i;
	if (data->a.top >= 0)
	{
		if (data->b.top >= 0)
		{
			data->b.top++;
			i = data->b.top - 1;
			while (i >= 0)
			{
				swap_t(&data->b.stack[i], &data->b.stack[i + 1]);
				i--;
			}
			swap_t(&data->a.stack[0], &data->b.stack[0]);
		}
		else
			push_t(data->b, &data->b.top, data->a.stack[data->a.top]);
		// push(data->b.stack, &data->b.top, data->a.stack[0], data->size);
		rb(data);
		data->a.top--;
	}
	ft_printf("pb\n");
}
