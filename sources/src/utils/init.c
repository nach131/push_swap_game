/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:39:21 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/07 11:40:13 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

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

void	init_data(t_data *data, int size)
{
	ft_bzero(data, sizeof(t_data));
	data->tp = ft_calloc(size, sizeof(int));
	data->size = size;
}

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
