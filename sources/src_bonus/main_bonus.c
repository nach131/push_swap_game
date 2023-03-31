/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:45:28 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/31 13:31:02 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap_bonus.h"

void	print_lst(t_stack *num)
{
	while (num)
	{
		printf(CYAN "%d index: %d\n", num->num, num->index);
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
	int		b[3];

	ctrl_num(argc - 1, argv);
	init_data(&data, argc - 1);
	stack_a = add_num(&data, argv);
	ctrl_num_dupl(&data);
	ctrl_sorted(&data);
	//=====add num tmp to B=============================================================
	b[0] = 30;
	b[1] = 20;
	b[2] = 10;
	stack_b = tmp_stack_b(b, 3);
	//=========================================================================
	sa_sb(&stack_a);
	sa_sb(&stack_b);
	ss(&stack_a, &stack_b);
	//=========================================================================
	printf(GREEN "----A----\n");
	print_lst(stack_a);
	printf(GREEN "----B----\n");
	print_lst(stack_b);
	//=========================================================================
	return (0);
}
