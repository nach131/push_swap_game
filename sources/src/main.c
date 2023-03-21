/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:25:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/21 15:17:51 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void print_tp(t_data *data)
{
	int i = data->size - 1;

	while (i >= 0)
	{
		printf(ORANGE "%d :%d\n", data->tp[i], i);
		i--;
	}
}

void print_lst(t_stack *num)
{
	while (num)
	{
		printf(CYAN "%d index: %d\n", num->num, num->index);
		num = num->next;
	}
}

t_stack *tmp_stack_b(int arr[], int size)
{
	int i = 0;
	t_stack *aux;

	while (i < size)
	{
		if (i == 0)
			aux = stack_new(arr[i]);
		else
			stackadd_back(&aux, stack_new(arr[i]));
		i++;
	}
	return (aux);
}

int main(int argc, char **argv)
{
	t_data data;
	t_stack *stack_a;
	t_stack *stack_b;

	ctrl_num(argc - 1, argv);
	init_data(&data, argc - 1);
	stack_a = add_num(&data, argv);
	ctrl_num_dupl(&data);
	ctrl_sorted(&data);
	quickSort(data.tp, 0, data.size - 1);
	index_stack(stack_a, data.tp, data.size);

	// //=====add num tmp to B=============================================================
	// int b[] = {30, 10, 20};
	// stack_b = tmp_stack_b(b, 3);
	// //=========================================================================

	// sa_sb(&stack_a, SA);
	// sa_sb(&stack_b, SB);
	// ss(&stack_a, &stack_b);

	// ra_rb(&stack_a, RA);
	// ra_rb(&stack_b, RB);
	// rr(&stack_a, &stack_b);

	// rra_rrb(&stack_b, RRB);
	// rrr(&stack_a, &stack_b);
	// pa_pb(&stack_a, &stack_b, PA);
	// pa_pb(&stack_a, &stack_b, PA);
	// pa_pb(&stack_a, &stack_b, PA);
	//=========================================================================
	print_lst(stack_a);
	selection(&stack_a, &stack_b, argc - 1);
	//=========================================================================
	// print_tp(&data);
	printf(GREEN "----A----\n");
	print_lst(stack_a);
	printf(GREEN "----B----\n");
	print_lst(stack_b);
	// //=========================================================================

	free(data.tp);
	clear_stack(stack_a);
	clear_stack(stack_b);
}
//
