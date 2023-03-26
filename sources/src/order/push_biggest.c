/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_biggest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:21:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/26 11:31:19 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "push_swap.h"

void	print_chunk(int n, int **chunk)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf(GREEN "START: %d\n", chunk[i][0]);
		printf(ORANGE "MIDDLE: %d\n", chunk[i][1]);
		printf(CYAN "END: %d\n", chunk[i][2]);
		i++;
	}
}

void static	init_chank_b(t_data *data, int n)
{
	int	i;

	i = 0;
	data->chunk = ft_calloc(n, sizeof(int *));
	while (i < n)
	{
		data->chunk[i] = ft_calloc(3, sizeof(int));
		i++;
	}
}

void static	chunk_b(t_data *data, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (i == n - 1)
		{
			data->chunk[n - 1][START] = (i)*data->size / n;
			data->chunk[n - 1][END] = data->size;
			data->chunk[i][MIDDLE] = (data->chunk[i][START]
					+ data->chunk[i][END]) / 2;
		}
		else
		{
			data->chunk[i][START] = (i) * (data->size / n);
			data->chunk[i][END] = (i + 1) * (data->size / n);
			data->chunk[i][MIDDLE] = (data->chunk[i][START]
					+ data->chunk[i][END]) / 2;
		}
		i++;
	}
	print_chunk(n, data->chunk);
}

void static	sort_chunk_b(t_stack **a, t_stack **b, t_data *data, int n)
{
	int	i;

	i = 0;
	while (i < n)
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

void static	free_chunk(int **chunk, int chunks)
{
	int	i;

	i = 0;
	while (i < chunks)
	{
		free(chunk[i]);
		i++;
	}
}

void	push_biggest(t_stack **a, t_stack **b, t_data *data, int chunks)
{
	init_chank_b(data, chunks);
	chunk_b(data, chunks);
	ft_bzero(data->tp, data->size * sizeof(int));
	sort_chunk_b(a, b, data, chunks);
	free_chunk(data->chunk, chunks);
}
