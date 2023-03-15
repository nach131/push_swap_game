/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:25:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/15 16:31:10 by nmota-bu         ###   ########.fr       */
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

int main(int argc, char **argv)
{
	t_data data;

	ctrl_num(argc - 1, argv);
	init_data(&data, argc - 1);
	// ft_bzero(&data, sizeof(t_data));
	// data.a.stack = ft_calloc(argc, sizeof(int));
	// data.b.stack = ft_calloc(argc, sizeof(int));
	// data.tp.stack = ft_calloc(argc, sizeof(int));
	// data.size = argc - 1;
	// data.a.top = -1;
	// data.b.top = -1;
	// data.tp.top = -1;
	add_num(&data, argv);
	print_stack(data.a);
	ctrl_num_dupl(&data);
	ctrl_sorted(&data);

	selection(&data);

	// write(1, "----\n", 5);
	// print_stack(data.a);

	// if (data.b.top > 0)
	// 	ft_printf(GREEN "----\n");
	// print_stack(data.b);
	// ft_printf(ORANGE "%d\n", data.count);

	free(data.a.stack);
	free(data.b.stack);
}
