/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:25:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/19 10:50:10 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

// void print_stack(t_ps stack)
// {
// 	int i = stack.top;

// 	while (i >= 0)
// 	{
// 		printf(YELLOW "%d:%d, tb:%d\n", stack.stack[i].num, i, stack.stack[i].index);
// 		// printf(YELLOW "%d, tb:%d\n", stack.stack[i].num, stack.stack[i].index);
// 		i--;
// 	}
// }

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

int main(int argc, char **argv)
{
	t_data data;
	t_stack *stack_a;

	ctrl_num(argc - 1, argv);
	init_data(&data, argc - 1);

	stack_a = add_num(&data, argv);

	ctrl_num_dupl(&data);
	ctrl_sorted(&data);
	quickSort(data.tp, 0, data.size - 1);
	index_stack(stack_a, data.tp, data.size);

	// data.a.num = 100;
	// data.a.index = -1;
	// t_stack *b = ft_calloc(1, sizeof(t_stack));
	// b->index = data.a.index + 1;
	// b->num = 200;
	// data.a.next = b;

	print_tp(&data);
	print_lst(stack_a);

	// print_stack(data.a);

	// selection(&data);

	// if (data.b.top >= 0)
	// 	ft_printf(GREEN "--B--\n");
	// print_stack(data.b);
	// ft_printf(GREEN "----\n");
	// int p = 2;
	// while (p >= 0)
	// {
	// 	printf("%d:%d top:%d\n", data.b.stack[p].num, p, data.b.top);
	// 	p--;
	// }

	free(data.tp);
	clear_stack(stack_a);
}
//
