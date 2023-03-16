/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:25:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/16 13:26:31 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void print_stack(t_ps stack)
{
	int i = 0;

	while (i <= stack.top)
	{
		printf(YELLOW "%d :%d\n", stack.stack[i], i);
		i++;
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
	// print_stack(data.a);
	ctrl_num_dupl(&data);
	ctrl_sorted(&data);
	print_tp(&data);

	// selection(&data);

	// write(1, "----\n", 5);
	// print_stack(data.a);

	// if (data.b.top > 0)
	// 	ft_printf(GREEN "----\n");
	// print_stack(data.b);

	free(data.a.stack);
	free(data.b.stack);
}
