/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_biggest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:51:25 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/25 20:53:31 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void	init_chank_b(t_data *data)
{
	int	i;

	i = 0;
	data->chunk = ft_calloc(7, sizeof(int *));
	while (i <= 6)
	{
		data->chunk[i] = ft_calloc(3, sizeof(int));
		i++;
	}
}

void static	chunk_b(t_data *data)
{
	int	i;

	i = 0;
	while (i < 7)
	{
		if (i == 6)
		{
			data->chunk[6][START] = (i)*data->size / 7;
			data->chunk[6][END] = data->size;
			data->chunk[i][MIDDLE] = (data->chunk[i][START]
					+ data->chunk[i][END]) / 2;
		}
		else
		{
			data->chunk[i][START] = (i) * (data->size / 7);
			data->chunk[i][END] = (i + 1) * (data->size / 7);
			data->chunk[i][MIDDLE] = (data->chunk[i][START]
					+ data->chunk[i][END]) / 2;
		}
		i++;
	}
}

void static	sort_chunk_b(t_stack **a, t_stack **b, t_data *data)
{
	int	i;

	i = 0;
	while (i <= 6)
	{
		while (ctrl_pb(data->tp, data->chunk[i][START], data->chunk[i][END]
				- 1))
		{
			if (((*a)->index <= data->chunk[i][END]))
			{
				switch_tp(data->tp, (*a)->index - 1, ON);
				pa_pb(a, b, PB);
				if (((*b)->index <= data->chunk[i][MIDDLE]))
					ra_rb(b, RB);
			}
			if ((*a))
				if (((*a)->index > data->chunk[i][END]))
					ra_rb(a, RA);
		}
		i++;
	}
}

void	push_biggest(t_stack **a, t_stack **b, t_data *data)
{
	init_chank_b(data);
	chunk_b(data);
	ft_bzero(data->tp, data->size * sizeof(int));
	sort_chunk_b(a, b, data);
	// chunk(a, b, data);
	// free_chunk(data->chunk);
}
