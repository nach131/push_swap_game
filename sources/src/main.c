/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:25:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/17 00:37:24 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void print_stack(t_ps stack)
{
	int i = stack.top;

	while (i >= 0)
	{
		printf(YELLOW "%d:%d, tb:%d\n", stack.stack[i].num, i, stack.stack[i].index);
		// printf(YELLOW "%d , tb:%d\n", stack.stack[i].num, stack.stack[i].index);
		i--;
	}
}

void print_tp(t_data *data)
{
	int i = 0;

	while (i < data->size)
	{
		printf(ORANGE "%d :%d\n", data->tp[i], i);
		i++;
	}
}

int main(int argc, char **argv)
{
	t_data data;

	ctrl_num(argc - 1, argv);
	init_data(&data, argc - 1);

	add_num(&data, argv);
	ctrl_num_dupl(&data);
	ctrl_sorted(&data);
	quickSort(data.tp, 0, data.size - 1);
	index_stack(data.tp, data.a.stack, argc - 1);

	// print_tp(&data);
	// sa(&data);
	// pa(&data);
	// pa(&data);
	// pa(&data);
	// ra(&data);
	// pb(&data);

	print_stack(data.a);

	// selection(&data);

	// write(1, "----\n", 5);
	// print_stack(data.a);

	if (data.b.top >= 0)
		ft_printf(GREEN "--B--\n");
	print_stack(data.b);

	free(data.a.stack);
	free(data.b.stack);
	free(data.tp);
}
