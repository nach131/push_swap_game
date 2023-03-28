/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:25:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/28 11:52:02 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void	print_tp(t_data *data)
{
	int	i;

	i = data->size - 1;
	while (i >= 0)
	{
		printf(ORANGE "%d :%d\n", data->tp[i], i);
		i--;
	}
}

void	print_lst(t_stack *num)
{
	while (num)
	{
		printf(CYAN "%d index: %d\n", num->num, num->index);
		// printf(CYAN "%d ", num->num);
		num = num->next;
	}
}

t_stack	*tmp_stack_b(int arr[], int size)
{
	int		i;
	t_stack	*aux;

	i = 0;
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

int	main(int argc, char **argv)
{
	t_data	data;
	t_stack	*stack_a;
	t_stack	*stack_b;

	ctrl_num(argc - 1, argv);
	init_data(&data, argc - 1);
	stack_a = add_num(&data, argv);
	ctrl_num_dupl(&data);
	ctrl_sorted(&data);
	quickSort(data.tp, 0, data.size - 1);
	index_stack(stack_a, data.tp, data.size);
	selection(&stack_a, &stack_b, &data);
	//=========================================================================
	// printf(GREEN "----A----\n");
	// print_lst(stack_a);
	// printf(GREEN "----B----\n");
	// print_lst(stack_b);
	//=========================================================================
	free(data.tp);
	free(data.chunk);
	clear_stack(stack_a);
	clear_stack(stack_b);
}
//
