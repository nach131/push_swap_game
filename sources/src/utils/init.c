/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:39:21 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/08 17:56:14 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap_game.h"

void	print_tp_dos(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf("%d ", arr[i]);
		i++;
	}
}

//=========================================================================

void	random_chip(t_data *data)
{
	int	num_added;
	int	unique;
	int	i;
	int	num;

	num_added = 0;
	while (num_added < data->size)
	{
		num = rand() % data->size + 1;
		// num = rand() % 18 + 1;
		unique = 1;
		i = 0;
		while (i < data->size)
		{
			if (data->tp[i] == num)
			{
				unique = 0;
				break ;
			}
			i++;
		}
		if (unique)
		{
			data->tp[num_added] = num;
			num_added++;
		}
	}
	// print_tp(data->tp, data->size);
}

t_stack	*add_num(t_data *data)
{
	int		i;
	int		j;
	t_stack	*stack;

	i = 1;
	j = data->size - 1;
	while (j >= 0)
	{
		if (i == 1)
			stack = stack_new(data->tp[j]);
		else
			stackadd_back(&stack, stack_new(data->tp[j]));
		i++;
		j--;
	}
	return (stack);
}
